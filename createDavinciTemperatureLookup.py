#!/usr/bin/python
#
# Creates a C code lookup table for doing ADC to temperature conversion
# on a microcontroller
# based on: http://hydraraptor.blogspot.com/2007/10/measuring-temperature-easy-way.html
# based on http://svn.reprap.org/trunk/reprap/firmware/Arduino/utilities/createTemperatureLookup.py
"""Thermistor Value Lookup Table Generator for Davinci Repetier Firmware

Specifically modified to scale the temperature by 8 and ADC values by 4 so that 
the output works within Davinci Repetier Firmware. 

Davinci 1.0 
    - extruder restistors: r1=10000, r2=4700
    - bed resistors:        r1=0,    r2=47000

BETA VALUES:
NAME                    r0      t0      BETA            SOURCE
DaVinci 1.0 Extruder    100000  25?     4066            https://github.com/luc-github/Repetier-Firmware/pull/84/files
DaVinci 1.0 Bed         440000  25?     4138            https://github.com/luc-github/Repetier-Firmware/pull/84/files
104GT2 (e3d v6)         100000  25?     4267
NTC 100k 3950           100000  25?     3950

Generates lookup to temperature values for use in a microcontroller in C format based on: 
http://hydraraptor.blogspot.com/2007/10/measuring-temperature-easy-way.html

The main use is for Arduino programs that read data from the circuit board described here:
http://make.rrrf.org/ts-1.0

Usage: python createDavinciTemperatureLookup.py [options]

Options:
  -h, --help            show this help
  --r0=...          thermistor rating where # is the ohm rating of the thermistor at t0 (eg: 10K = 10000)
  --t0=...          thermistor temp rating where # is the temperature in Celsuis to get r0 (from your datasheet)
  --beta=...            thermistor beta rating.rating see http://reprap.org/bin/view/Main/MeasuringThermistorBeta
  --r1=...          R1 rating where # is the ohm rating of R1 (eg: 10K = 10000)
  --r2=...          R2 rating where # is the ohm rating of R2 (eg: 10K = 10000)
  --gt0=...         First temperature in range to generate (eg: -20.0) (float, celsius)
  --gt1=...         Last temperature in range to generate (eg: 130.0) (float, celsius)
  --num-temps=...   The number of points to generate between gt0 and gt1 (inclusively). A higher number would mean greater accuracy, but more processor cycles spent looking up the temperature.
"""

from math import *
import sys
import getopt
import sys

class Thermistor:
    "Class to do the thermistor maths"
    def __init__(self, r0, t0, beta, r1, r2):
        self.r0 = r0                        # stated resistance, e.g. 10K
        self.t0 = t0 + 273.15               # temperature at stated resistance, e.g. 25C
        self.beta = beta                    # stated beta, e.g. 3500
        self.vadc = 5.0                     # ADC reference
        self.vcc = 5.0                      # supply voltage to potential divider
        self.k = r0 * exp(-beta / self.t0)   # constant part of calculation

        if r1 > 0:
            self.vs = r1 * self.vcc / (r1 + r2) # effective bias voltage
            self.rs = r1 * r2 / (r1 + r2)       # effective bias impedance
        else:
            self.vs = self.vcc                   # effective bias voltage
            self.rs = r2                         # effective bias impedance

    def temp(self,adc):
        "Convert ADC reading into a temperature in Celcius"
        v = adc * self.vadc / 1024          # convert the 10 bit ADC value to a voltage
        r = self.rs * v / (self.vs - v)     # resistance of thermistor
        return (self.beta / log(r / self.k)) - 273.15        # temperature

    def setting(self, t):
        "Convert a temperature into a ADC value"
        r = self.r0 * exp(self.beta * (1 / (t + 273.15) - 1 / self.t0)) # resistance of the thermistor
        v = self.vs * r / (self.rs + r)     # the voltage at the potential divider
        return round(4*v / self.vadc * 1024)  # the ADC reading



def main(argv):

    r0 = 10000;
    t0 = 25;
    beta = 4267 ;
    r1 = 10000;
    r2 = 4700;
    gt0=None
    gt1=None
    num_temps=None
    temp_range = None
    
    try:
        opts, args = getopt.getopt(argv, "h", ["help", "r0=", "t0=", "beta=", "r1=", "r2=","gt0=","gt1=","num-temps=","temps="])
    except getopt.GetoptError:
        usage()
        sys.exit(2)

    for opt, arg in opts:
        if opt in ("-h", "--help"):
            usage()
            sys.exit()
        elif opt == "--r0":
            r0 = int(arg)
        elif opt == "--t0":
            t0 = int(arg)
        elif opt == "--beta":
            beta = int(arg)
        elif opt == "--r1":
            r1 = int(arg)
        elif opt == "--r2":
            r2 = int(arg)
        elif opt == "--gt0":
            gt0 = float(arg)
        elif opt == "--gt1":
            gt1 = float(arg)
        elif opt == "--num-temps":
            num_temps = int(arg)
        elif opt == "--temps":
            temps = arg.split(',')
            temp_range = map(float,temps)

    if r1:
        max_adc = int(1023 * r1 / (r1 + r2));
    else:
        max_adc = 1023


    if gt0 != None:
        temp_span = gt1 - gt0
        increment = temp_span / (num_temps - 1)
        temp_range = []
        cur_temp = gt1
        while cur_temp >= gt0:
            temp_range.append(cur_temp)
            cur_temp = cur_temp - increment

            
    t = Thermistor(r0, t0, beta, r1, r2)

    gen_entry = lambda temp: "{%s, %s}" % (int(round(t.setting(temp))), int(round(8*temp)))

    entries = []
    str_temps = []
    for temp in temp_range:
        adc = int(round(t.setting(temp)))
        adj_temp = int(round(8*temp))
        entries.append("{%s, %s}" % (adc, adj_temp))
        str_temps.append("%0.2fC" % (temp))


    print "/*"
    print "   Thermistor lookup table for RepRap Temperature Sensor Boards"
    print "   Made with createDavinciTemperatureLookup.py "
    print "    (https://github.com/justfalter/Repetier-Firmware/createDavinciTemperatureLookup.py)"
    #print "    ./createDavinciTemperatureLookup.py --r0=%s --t0=%s --r1=%s --r2=%s --beta=%s --gt0=%f --gt1=%f --num-temps=%d" % (r0, t0, r1, r2, beta, gt0, gt1, num_temps)
    print "    ./createDavinciTemperatureLookup.py %s" % (' '.join(argv))
    print "   r0: %s" % (r0)
    print "   t0: %s" % (t0)
    print "   r1: %s" % (r1)
    print "   r2: %s" % (r2)
    print "   beta: %s" % (beta)
    print "   max adc: %s" % (max_adc)
    print ""
    print("   Temperature points: %s" % (", ".join(str_temps)))
    print "*/"
    print "#define NUM_TEMPS_USERTHERMISTOR0 %d" % (len(temp_range))

    
    print("#define USER_THERMISTORTABLE0 {%s}" % (",".join(entries)))
    
def usage():
    print __doc__

if __name__ == "__main__":
    main(sys.argv[1:])
