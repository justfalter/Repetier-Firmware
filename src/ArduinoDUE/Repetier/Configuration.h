/*
    This file is part of Repetier-Firmware.

    Repetier-Firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Repetier-Firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Repetier-Firmware.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

/**************** READ FIRST ************************

   This configuration file was created with the configuration tool. For that
   reason, it does not contain the same informations as the original Configuration.h file.
   It misses the comments and unused parts. Open this file file in the config tool
   to see and change the data. You can also upload it to newer/older versions. The system
   will silently add new options, so compilation continues to work.

   This file is optimized for version 0.91
   generator: http://www.repetier.com/firmware/v091/

   If you are in doubt which named functions use which pins on your board, please check the
   pins.h for the used name->pin assignments and your board documentation to verify it is
   as you expect.

*/

#define NUM_EXTRUDER 1
#define MOTHERBOARD 999

#include "pins.h"

// ################## EDIT THESE SETTINGS MANUALLY ################
// ################ END MANUAL SETTINGS ##########################

#define FAN_PIN -1
#define FAN_BOARD_PIN -1
#define X_MAX_PIN -1
#define Y_MAX_PIN -1
#define Z_MAX_PIN -1

//#define EXTERNALSERIAL  use Arduino serial library instead of build in. Requires more ram, has only 63 byte input buffer.
// Uncomment the following line if you are using arduino compatible firmware made for Arduino version earlier then 1.0
// If it is incompatible you will get compiler errors about write functions not beeing compatible!
//#define COMPAT_PRE1


#define DRIVE_SYSTEM 0
#define XAXIS_STEPS_PER_MM 80
#define YAXIS_STEPS_PER_MM 80
#define ZAXIS_STEPS_PER_MM 2560
#define EXTRUDER_FAN_COOL_TEMP 50
#define EXT0_X_OFFSET 0
#define EXT0_Y_OFFSET 0
#define EXT0_STEPS_PER_MM 96
#define EXT0_TEMPSENSOR_TYPE 5
#define EXT0_TEMPSENSOR_PIN TEMP_0_PIN
#define EXT0_HEATER_PIN HEATER_0_PIN
#define EXT0_STEP_PIN ORIG_E0_STEP_PIN
#define EXT0_DIR_PIN ORIG_E0_DIR_PIN
#define EXT0_INVERSE 0
#define EXT0_ENABLE_PIN E0_ENABLE_PIN
#define EXT0_ENABLE_ON 0
#define EXT0_MAX_FEEDRATE 50
#define EXT0_MAX_START_FEEDRATE 20
#define EXT0_MAX_ACCELERATION 5000
#define EXT0_HEAT_MANAGER 3
#define EXT0_WATCHPERIOD 1
#define EXT0_PID_INTEGRAL_DRIVE_MAX 230
#define EXT0_PID_INTEGRAL_DRIVE_MIN 40
#define EXT0_PID_P 7
#define EXT0_PID_I 2
#define EXT0_PID_D 40
#define EXT0_PID_MAX 255
#define EXT0_ADVANCE_K 0
#define EXT0_ADVANCE_L 0
#define EXT0_ADVANCE_BACKLASH_STEPS 0
#define EXT0_WAIT_RETRACT_TEMP 150
#define EXT0_WAIT_RETRACT_UNITS 0
#define EXT0_SELECT_COMMANDS ""
#define EXT0_DESELECT_COMMANDS ""
#define EXT0_EXTRUDER_COOLER_PIN ORIG_FAN_PIN
#define EXT0_EXTRUDER_COOLER_SPEED 255
#define RETRACT_DURING_HEATUP true
#define PID_CONTROL_RANGE 20
#define SKIP_M109_IF_WITHIN 2
#define SCALE_PID_TO_MAX 0
#define TEMP_HYSTERESIS 0
#define EXTRUDE_MAXLENGTH 160
#define NUM_TEMPS_USERTHERMISTOR0 23
#define USER_THERMISTORTABLE0 {{111,2240},{132,2120},{165,2000},{201,1920},{248,1800},{309,1720},{389,1640},{485,1560},{596,1440},{714,1360},{894,1280},{1083,1160},{1312,1080},{1539,960},{1786,880},{2006,760},{2208,640},{2382,560},{2503,440},{2602,360},{2679,264},{2729,160},{2740,-160}} 
#define NUM_TEMPS_USERTHERMISTOR1 24
#define USER_THERMISTORTABLE1 {{2003,1040},{2058,1000},{2161,960},{2253,920},{2337,880},{2450,840},{2549,800},{2637,760},{2715,720},{2786,680},{2907,640},{3008,600},{3093,560},{3165,520},{3247,480},{3316,440},{3374,400},{3447,360},{3506,320},{3548,280},{3610,240},{3664,200},{3708,160},{3723,-160}} 
#define NUM_TEMPS_USERTHERMISTOR2 0
#define USER_THERMISTORTABLE2 {}
#define GENERIC_THERM_VREF 5
#define GENERIC_THERM_NUM_ENTRIES 33
#define HEATER_PWM_SPEED 0

// ############# Heated bed configuration ########################

#define HAVE_HEATED_BED 1
#define HEATED_BED_MAX_TEMP 120
#define SKIP_M190_IF_WITHIN 3
#define HEATED_BED_SENSOR_TYPE 6
#define HEATED_BED_SENSOR_PIN TEMP_1_PIN
#define HEATED_BED_HEATER_PIN HEATER_1_PIN
#define HEATED_BED_SET_INTERVAL 3000
#define HEATED_BED_HEAT_MANAGER 2
#define HEATED_BED_PID_INTEGRAL_DRIVE_MAX 255
#define HEATED_BED_PID_INTEGRAL_DRIVE_MIN 80
#define HEATED_BED_PID_PGAIN   196
#define HEATED_BED_PID_IGAIN   33
#define HEATED_BED_PID_DGAIN 290
#define HEATED_BED_PID_MAX 255
#define MIN_EXTRUDER_TEMP 150
#define MAXTEMP 240
#define MIN_DEFECT_TEMPERATURE -10
#define MAX_DEFECT_TEMPERATURE 290

// ################ Endstop configuration #####################

#define ENDSTOP_PULLUP_X_MIN false
#define ENDSTOP_X_MIN_INVERTING false
#define MIN_HARDWARE_ENDSTOP_X true
#define ENDSTOP_PULLUP_Y_MIN false
#define ENDSTOP_Y_MIN_INVERTING false
#define MIN_HARDWARE_ENDSTOP_Y true
#define ENDSTOP_PULLUP_Z_MIN false
#define ENDSTOP_Z_MIN_INVERTING false
#define MIN_HARDWARE_ENDSTOP_Z true
#define ENDSTOP_PULLUP_X_MAX true
#define ENDSTOP_X_MAX_INVERTING false
#define MAX_HARDWARE_ENDSTOP_X false
#define ENDSTOP_PULLUP_Y_MAX true
#define ENDSTOP_Y_MAX_INVERTING false
#define MAX_HARDWARE_ENDSTOP_Y false
#define ENDSTOP_PULLUP_Z_MAX true
#define ENDSTOP_Z_MAX_INVERTING false
#define MAX_HARDWARE_ENDSTOP_Z false
#define max_software_endstop_r true

#define min_software_endstop_x false
#define min_software_endstop_y false
#define min_software_endstop_z false
#define max_software_endstop_x true
#define max_software_endstop_y true
#define max_software_endstop_z true
#define ENDSTOP_X_BACK_MOVE 5
#define ENDSTOP_Y_BACK_MOVE 5
#define ENDSTOP_Z_BACK_MOVE 2
#define ENDSTOP_X_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_Y_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_Z_RETEST_REDUCTION_FACTOR 4
#define ENDSTOP_X_BACK_ON_HOME 0
#define ENDSTOP_Y_BACK_ON_HOME 0
#define ENDSTOP_Z_BACK_ON_HOME 0
#define ALWAYS_CHECK_ENDSTOPS 1

// ################# XYZ movements ###################

#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define DISABLE_X 0
#define DISABLE_Y 0
#define DISABLE_Z 0
#define DISABLE_E 0
#define INVERT_X_DIR 1
#define INVERT_Y_DIR 0
#define INVERT_Z_DIR 1
#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR -1
#define X_MAX_LENGTH 235
#define Y_MAX_LENGTH 217
#define Z_MAX_LENGTH 202
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0

// ##########################################################################################
// ##                           Movement settings                                          ##
// ##########################################################################################

#define FEATURE_BABYSTEPPING 1
#define BABYSTEP_MULTIPLICATOR 1

#define DELTA_SEGMENTS_PER_SECOND_PRINT 180 // Move accurate setting for print moves
#define DELTA_SEGMENTS_PER_SECOND_MOVE 70 // Less accurate setting for other moves

// Delta settings
#define DELTA_HOME_ON_POWER 0

#define MAX_DELTA_SEGMENTS_PER_LINE 24
#define STEPPER_INACTIVE_TIME 360L
#define MAX_INACTIVE_TIME 0L
#define MAX_FEEDRATE_X 200
#define MAX_FEEDRATE_Y 200
#define MAX_FEEDRATE_Z 5
#define HOMING_FEEDRATE_X 40
#define HOMING_FEEDRATE_Y 40
#define HOMING_FEEDRATE_Z 4
#define HOMING_ORDER HOME_ORDER_XYZ
#define ENABLE_BACKLASH_COMPENSATION 1
#define X_BACKLASH 0
#define Y_BACKLASH 0
#define Z_BACKLASH 0
#define RAMP_ACCELERATION 1
#define STEPPER_HIGH_DELAY 0
#define STEP_DOUBLER_FREQUENCY 12000
#define ALLOW_QUADSTEPPING 1
#define DOUBLE_STEP_DELAY 1 // time in microseconds
#define MAX_HALFSTEP_INTERVAL 4000
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_X 1000
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Y 1000
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Z 100
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_X 1000
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Y 1000
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Z 100
#define MAX_JERK 20
#define MAX_ZJERK 0.3
#define MOVE_CACHE_SIZE 32
#define MOVE_CACHE_LOW 10
#define LOW_TICKS_PER_MOVE 250000
#define FEATURE_TWO_XSTEPPER 0
#define X2_STEP_PIN   ORIG_E1_STEP_PIN
#define X2_DIR_PIN    ORIG_E1_DIR_PIN
#define X2_ENABLE_PIN ORIG_E1_ENABLE_PIN
#define FEATURE_TWO_YSTEPPER 0
#define Y2_STEP_PIN   ORIG_E1_STEP_PIN
#define Y2_DIR_PIN    ORIG_E1_DIR_PIN
#define Y2_ENABLE_PIN ORIG_E1_ENABLE_PIN
#define FEATURE_TWO_ZSTEPPER 0
#define Z2_STEP_PIN   ORIG_E1_STEP_PIN
#define Z2_DIR_PIN    ORIG_E1_DIR_PIN
#define Z2_ENABLE_PIN ORIG_E1_ENABLE_PIN
#define FEATURE_DITTO_PRINTING 0
#define USE_ADVANCE
#define ENABLE_QUADRATIC_ADVANCE


// ################# Misc. settings ##################

#define BAUDRATE 230400
#define ENABLE_POWER_ON_STARTUP
#define POWER_INVERTING 0
#define KILL_METHOD 1
#define GCODE_BUFFER_SIZE 2
#define ACK_WITH_LINENUMBER
#define WAITING_IDENTIFIER "wait"
#define ECHO_ON_EXECUTE
#define EEPROM_MODE 1

/* ======== Servos =======
Control the servos with
M340 P<servoId> S<pulseInUS>   / ServoID = 0..3  pulseInUs = 500..2500
Servos are controlled by a pulse width normally between 500 and 2500 with 1500ms in center position. 0 turns servo off.
WARNING: Servos can draw a considerable amount of current. Make sure your system can handle this or you may risk your hardware!
*/
#define FEATURE_SERVO 0
#define SERVO0_PIN 11
#define SERVO1_PIN -1
#define SERVO2_PIN -1
#define SERVO3_PIN -1
#define FEATURE_WATCHDOG 0

// #################### Z-Probing #####################

#define FEATURE_Z_PROBE 1
#define Z_PROBE_BED_DISTANCE 10
#define Z_PROBE_PIN 5
#define Z_PROBE_PULLUP 1
#define Z_PROBE_ON_HIGH 0
#define Z_PROBE_X_OFFSET 0
#define Z_PROBE_Y_OFFSET 0
#define Z_PROBE_WAIT_BEFORE_TEST 0
#define Z_PROBE_SPEED 1
#define Z_PROBE_XY_SPEED 150
#define Z_PROBE_SWITCHING_DISTANCE 1
#define Z_PROBE_REPETITIONS 1
#define Z_PROBE_HEIGHT 0.28
#define Z_PROBE_START_SCRIPT ""
#define Z_PROBE_FINISHED_SCRIPT ""
#define FEATURE_AUTOLEVEL 1
#define Z_PROBE_X1 25
#define Z_PROBE_Y1 6
#define Z_PROBE_X2 25
#define Z_PROBE_Y2 215
#define Z_PROBE_X3 211
#define Z_PROBE_Y3 215

#ifndef SDSUPPORT  // Some boards have sd support on board. These define the values already in pins.h
#define SDSUPPORT 1
#define SDCARDDETECT SDCARDDETECT
#define SDCARDDETECTINVERTED 0
#endif
#define SD_EXTENDED_DIR 1 /** Show extended directory including file length. Don't use this with Pronterface! */
#define ARC_SUPPORT 1
#define FEATURE_MEMORY_POSITION 1
#define FEATURE_CHECKSUM_FORCED 0
#define FEATURE_FAN_CONTROL 0
#define FEATURE_CONTROLLER 1
#define UI_LANGUAGE 0
#define UI_PRINTER_NAME "Da Vinci 1.0"
#define UI_PRINTER_COMPANY "XYZ Printing"
#define UI_PAGES_DURATION 4000
#define UI_ANIMATION 0
#define UI_SPEEDDEPENDENT_POSITIONING 0
#define UI_DISABLE_AUTO_PAGESWITCH 1
#define UI_AUTORETURN_TO_MENU_AFTER 30000
#define FEATURE_UI_KEYS 0
#define UI_ENCODER_SPEED 1
#define UI_KEY_BOUNCETIME 10
#define UI_KEY_FIRST_REPEAT 500
#define UI_KEY_REDUCE_REPEAT 50
#define UI_KEY_MIN_REPEAT 50
#define FEATURE_BEEPER 1
#define CASE_LIGHTS_PIN 85
#define CASE_LIGHT_DEFAULT_ON 1
#define UI_START_SCREEN_DELAY 2000
/**
Beeper sound definitions for short beeps during key actions
and longer beeps for important actions.
Parameter is delay in microseconds and the secons is the number of repetitions.
Values must be in range 1..255
*/
#define BEEPER_SHORT_SEQUENCE 2,2
#define BEEPER_LONG_SEQUENCE 8,8
#define UI_SET_PRESET_HEATED_BED_TEMP_PLA 55
#define UI_SET_PRESET_EXTRUDER_TEMP_PLA   180
#define UI_SET_PRESET_HEATED_BED_TEMP_ABS 90
#define UI_SET_PRESET_EXTRUDER_TEMP_ABS   220
#define UI_SET_MIN_HEATED_BED_TEMP  30
#define UI_SET_MAX_HEATED_BED_TEMP 120
#define UI_SET_MIN_EXTRUDER_TEMP   170
#define UI_SET_MAX_EXTRUDER_TEMP   240
#define UI_SET_EXTRUDER_FEEDRATE 2
#define UI_SET_EXTRUDER_RETRACT_DISTANCE 3

#endif

/* Below you will find the configuration string, that created this Configuration.h

========== Start configuration string ==========
{
    "editMode": 2,
    "processor": 1,
    "baudrate": 230400,
    "xStepsPerMM": 80,
    "yStepsPerMM": 80,
    "zStepsPerMM": 2600,
    "xInvert": "1",
    "xInvertEnable": "0",
    "eepromMode": 1,
    "yInvert": "0",
    "yInvertEnable": "0",
    "zInvert": "1",
    "zInvertEnable": "0",
    "extruder": [
        {
            "id": 0,
            "heatManager": 3,
            "pidDriveMin": 40,
            "pidDriveMax": 230,
            "pidMax": 255,
            "sensorType": 5,
            "sensorPin": "TEMP_0_PIN",
            "heaterPin": "HEATER_0_PIN",
            "maxFeedrate": 50,
            "startFeedrate": 20,
            "invert": "0",
            "invertEnable": "0",
            "acceleration": 5000,
            "watchPeriod": 1,
            "pidP": 7,
            "pidI": 2,
            "pidD": 40,
            "advanceK": 0,
            "advanceL": 0,
            "waitRetractTemp": 150,
            "waitRetractUnits": 0,
            "waitRetract": 0,
            "stepsPerMM": 96,
            "coolerPin": "ORIG_FAN_PIN",
            "coolerSpeed": 255,
            "selectCommands": "",
            "deselectCommands": "",
            "xOffset": 0,
            "yOffset": 0,
            "xOffsetSteps": 0,
            "yOffsetSteps": 0,
            "stepper": {
                "name": "Extruder 0",
                "step": "ORIG_E0_STEP_PIN",
                "dir": "ORIG_E0_DIR_PIN",
                "enable": "E0_ENABLE_PIN"
            },
            "advanceBacklashSteps": 0
        }
    ],
    "uiLanguage": 0,
    "uiController": 0,
    "xMinEndstop": 4,
    "yMinEndstop": 4,
    "zMinEndstop": 4,
    "xMaxEndstop": 0,
    "yMaxEndstop": 0,
    "zMaxEndstop": 0,
    "motherboard": 999,
    "driveSystem": 0,
    "xMaxSpeed": 200,
    "xHomingSpeed": 40,
    "xTravelAcceleration": 1000,
    "xPrintAcceleration": 1000,
    "yMaxSpeed": 200,
    "yHomingSpeed": 40,
    "yTravelAcceleration": 1000,
    "yPrintAcceleration": 1000,
    "zMaxSpeed": 5,
    "zHomingSpeed": 4,
    "zTravelAcceleration": 100,
    "zPrintAcceleration": 100,
    "xMotor": {
        "name": "X motor",
        "step": "ORIG_X_STEP_PIN",
        "dir": "ORIG_X_DIR_PIN",
        "enable": "ORIG_X_ENABLE_PIN"
    },
    "yMotor": {
        "name": "Y motor",
        "step": "ORIG_Y_STEP_PIN",
        "dir": "ORIG_Y_DIR_PIN",
        "enable": "ORIG_Y_ENABLE_PIN"
    },
    "zMotor": {
        "name": "Z motor",
        "step": "ORIG_Z_STEP_PIN",
        "dir": "ORIG_Z_DIR_PIN",
        "enable": "ORIG_Z_ENABLE_PIN"
    },
    "enableBacklash": "1",
    "backlashX": 0,
    "backlashY": 0,
    "backlashZ": 0,
    "stepperInactiveTime": 360,
    "maxInactiveTime": 0,
    "xMinPos": 0,
    "yMinPos": 0,
    "zMinPos": 0,
    "xLength": 240,
    "yLength": 215,
    "zLength": 200,
    "alwaysCheckEndstops": "1",
    "disableX": "0",
    "disableY": "0",
    "disableZ": "0",
    "disableE": "0",
    "xHomeDir": "-1",
    "yHomeDir": "-1",
    "zHomeDir": "-1",
    "xEndstopBack": 0,
    "yEndstopBack": 0,
    "zEndstopBack": 0,
    "deltaSegmentsPerSecondPrint": 180,
    "deltaSegmentsPerSecondTravel": 70,
    "deltaDiagonalRod": 445,
    "deltaHorizontalRadius": 209.25,
    "deltaAlphaA": 210,
    "deltaAlphaB": 330,
    "deltaAlphaC": 90,
    "deltaDiagonalCorrA": 0,
    "deltaDiagonalCorrB": 0,
    "deltaDiagonalCorrC": 0,
    "deltaMaxRadius": 150,
    "deltaRadiusCorrA": 0,
    "deltaRadiusCorrB": 0,
    "deltaRadiusCorrC": 0,
    "deltaXOffsetSteps": 0,
    "deltaYOffsetSteps": 0,
    "deltaZOffsetSteps": 0,
    "deltaSegmentsPerLine": 24,
    "stepperHighDelay": 0,
    "stepDoublerFrequency": 12000,
    "allowQuadstepping": "1",
    "doubleStepDelay": 1,
    "maxHalfstepInterval": 4000,
    "maxJerk": 20,
    "maxZJerk": 0.3,
    "moveCacheSize": 32,
    "moveCacheLow": 10,
    "lowTicksPerMove": 250000,
    "enablePowerOnStartup": "1",
    "echoOnExecute": "1",
    "sendWaits": "1",
    "ackWithLineNumber": "1",
    "killMethod": 1,
    "useAdvance": "1",
    "useQuadraticAdvance": "1",
    "powerInverting": 0,
    "mirrorX": 0,
    "mirrorXMotor": {
        "name": "Extruder 1",
        "step": "ORIG_E1_STEP_PIN",
        "dir": "ORIG_E1_DIR_PIN",
        "enable": "ORIG_E1_ENABLE_PIN"
    },
    "mirrorY": 0,
    "mirrorYMotor": {
        "name": "Extruder 1",
        "step": "ORIG_E1_STEP_PIN",
        "dir": "ORIG_E1_DIR_PIN",
        "enable": "ORIG_E1_ENABLE_PIN"
    },
    "mirrorZ": 0,
    "mirrorZMotor": {
        "name": "Extruder 1",
        "step": "ORIG_E1_STEP_PIN",
        "dir": "ORIG_E1_DIR_PIN",
        "enable": "ORIG_E1_ENABLE_PIN"
    },
    "dittoPrinting": "0",
    "featureServos": "0",
    "servo0Pin": 11,
    "servo1Pin": -1,
    "servo2Pin": -1,
    "servo3Pin": -1,
    "featureWatchdog": "0",
    "hasHeatedBed": "1",
    "enableZProbing": "1",
    "extrudeMaxLength": 160,
    "homeOrder": "HOME_ORDER_XYZ",
    "featureController": 1,
    "uiPrinterName": "Da Vinci 1.0",
    "uiPrinterCompany": "XYZ Printing",
    "uiPagesDuration": 4000,
    "uiAnimation": "0",
    "uiDisablePageswitch": "1",
    "uiAutoReturnAfter": 30000,
    "featureKeys": "0",
    "uiEncoderSpeed": 1,
    "uiKeyBouncetime": 10,
    "uiKeyFirstRepeat": 500,
    "uiKeyReduceRepeat": 50,
    "uiKeyMinRepeat": 50,
    "featureBeeper": "1",
    "uiPresetBedTempPLA": 60,
    "uiPresetBedABS": 90,
    "uiPresetExtruderPLA": 170,
    "uiPresetExtruderABS": 210,
    "uiMinHeatedBed": 30,
    "uiMaxHeatedBed": 120,
    "uiMinEtxruderTemp": 170,
    "uiMaxExtruderTemp": 240,
    "uiExtruderFeedrate": 2,
    "uiExtruderRetractDistance": 3,
    "uiSpeeddependentPositioning": "0",
    "maxBedTemperature": 120,
    "bedSensorType": 6,
    "bedSensorPin": "TEMP_1_PIN",
    "bedHeaterPin": "HEATER_1_PIN",
    "bedHeatManager": 2,
    "bedUpdateInterval": 3000,
    "bedPidDriveMin": 80,
    "bedPidDriveMax": 255,
    "bedPidP": 196,
    "bedPidI": 33,
    "bedPidD": 290,
    "bedPidMax": 255,
    "caseLightPin": 85,
    "caseLightDefaultOn": "1",
    "bedSkipIfWithin": 3,
    "gen1T0": 25,
    "gen1R0": 440000,
    "gen1Beta": 4036,
    "gen1MinTemp": -20,
    "gen1MaxTemp": 300,
    "gen1R1": 0,
    "gen1R2": 51000,
    "gen2T0": 25,
    "gen2R0": 440000,
    "gen2Beta": 2470,
    "gen2MinTemp": 10,
    "gen2MaxTemp": 150,
    "gen2R1": 0,
    "gen2R2": 51000,
    "gen3T0": 25,
    "gen3R0": 100000,
    "gen3Beta": 4036,
    "gen3MinTemp": -20,
    "gen3MaxTemp": 300,
    "gen3R1": 0,
    "gen3R2": 4700,
    "userTable0": {
        "r1": 0,
        "r2": 4700,
        "temps": [
            {
                "t": 280,
                "r": 131,
                "adc": 111.04222728214
            },
            {
                "t": 265,
                "r": 157,
                "adc": 132.36874613959
            },
            {
                "t": 250,
                "r": 197,
                "adc": 164.73657341229
            },
            {
                "t": 240,
                "r": 243,
                "adc": 201.31195630184
            },
            {
                "t": 225,
                "r": 303,
                "adc": 248.00819508295
            },
            {
                "t": 215,
                "r": 384,
                "adc": 309.29976396538
            },
            {
                "t": 205,
                "r": 493,
                "adc": 388.76083188908
            },
            {
                "t": 195,
                "r": 632,
                "adc": 485.37884471118
            },
            {
                "t": 180,
                "r": 801,
                "adc": 596.27249590983
            },
            {
                "t": 170,
                "r": 993,
                "adc": 714.26927806078
            },
            {
                "t": 160,
                "r": 1312,
                "adc": 893.65269461078
            },
            {
                "t": 145,
                "r": 1691,
                "adc": 1083.4994523549
            },
            {
                "t": 135,
                "r": 2215,
                "adc": 1311.7028199566
            },
            {
                "t": 120,
                "r": 2831,
                "adc": 1539.3632983668
            },
            {
                "t": 110,
                "r": 3636,
                "adc": 1786.1588291747
            },
            {
                "t": 95,
                "r": 4515,
                "adc": 2006.3944655453
            },
            {
                "t": 80,
                "r": 5500,
                "adc": 2208.0882352941
            },
            {
                "t": 70,
                "r": 6536,
                "adc": 2382.0683517266
            },
            {
                "t": 55,
                "r": 7391,
                "adc": 2503.1961789761
            },
            {
                "t": 45,
                "r": 8193,
                "adc": 2602.2132164741
            },
            {
                "t": 33,
                "r": 8892,
                "adc": 2678.9832254267
            },
            {
                "t": 20,
                "r": 9386,
                "adc": 2728.6433338066
            }
        ],
        "numEntries": 22
    },
    "userTable1": {
        "r1": 0,
        "r2": 4700,
        "temps": [
            {
                "t": 130,
                "r": 4500,
                "adc": 2002.9891304348
            },
            {
                "t": 125,
                "r": 4750,
                "adc": 2058.3333333333
            },
            {
                "t": 120,
                "r": 5250,
                "adc": 2160.6783919598
            },
            {
                "t": 115,
                "r": 5750,
                "adc": 2253.2296650718
            },
            {
                "t": 110,
                "r": 6250,
                "adc": 2337.3287671233
            },
            {
                "t": 105,
                "r": 7000,
                "adc": 2450
            },
            {
                "t": 100,
                "r": 7750,
                "adc": 2549.0963855422
            },
            {
                "t": 95,
                "r": 8500,
                "adc": 2636.9318181818
            },
            {
                "t": 90,
                "r": 9250,
                "adc": 2715.3225806452
            },
            {
                "t": 85,
                "r": 10000,
                "adc": 2785.7142857143
            },
            {
                "t": 80,
                "r": 11500,
                "adc": 2906.9444444444
            },
            {
                "t": 75,
                "r": 13000,
                "adc": 3007.6271186441
            },
            {
                "t": 70,
                "r": 14500,
                "adc": 3092.578125
            },
            {
                "t": 65,
                "r": 16000,
                "adc": 3165.2173913043
            },
            {
                "t": 60,
                "r": 18000,
                "adc": 3247.1365638767
            },
            {
                "t": 55,
                "r": 20000,
                "adc": 3315.7894736842
            },
            {
                "t": 50,
                "r": 22000,
                "adc": 3374.1573033708
            },
            {
                "t": 45,
                "r": 25000,
                "adc": 3446.9696969697
            },
            {
                "t": 40,
                "r": 28000,
                "adc": 3506.4220183486
            },
            {
                "t": 35,
                "r": 30500,
                "adc": 3548.2244318182
            },
            {
                "t": 30,
                "r": 35000,
                "adc": 3610.201511335
            },
            {
                "t": 25,
                "r": 40000,
                "adc": 3664.4295302013
            },
            {
                "t": 20,
                "r": 45000,
                "adc": 3707.7464788732
            }
        ],
        "numEntries": 23
    },
    "userTable2": {
        "r1": 0,
        "r2": 4700,
        "temps": [

        ]
    },
    "tempHysteresis": 0,
    "pidControlRange": 20,
    "skipM109Within": 2,
    "extruderFanCoolTemp": 50,
    "minTemp": 150,
    "maxTemp": 240,
    "minDefectTemp": -10,
    "maxDefectTemp": 290,
    "arcSupport": "1",
    "featureMemoryPositionWatchdog": "1",
    "forceChecksum": "0",
    "sdExtendedDir": "1",
    "featureFanControl": "0",
    "fanPin": -1,
    "scalePidToMax": 0,
    "zProbePin": 5,
    "zProbeBedDistance": 10,
    "zProbePullup": "1",
    "zProbeOnHigh": "0",
    "zProbeXOffset": 0,
    "zProbeYOffset": 0,
    "zProbeWaitBeforeTest": "0",
    "zProbeSpeed": 1,
    "zProbeXYSpeed": 150,
    "zProbeHeight": 0.28,
    "zProbeStartScript": "",
    "zProbeFinishedScript": "",
    "featureAutolevel": "1",
    "zProbeX1": 25,
    "zProbeY1": 6,
    "zProbeX2": 25,
    "zProbeY2": 215,
    "zProbeX3": 211,
    "zProbeY3": 215,
    "zProbeSwitchingDistance": 1,
    "zProbeRepetitions": 1,
    "sdSupport": "1",
    "sdCardDetectPin": "SDCARDDETECT",
    "sdCardDetectInverted": "0",
    "uiStartScreenDelay": 1000,
    "xEndstopBackMove": 5,
    "yEndstopBackMove": 5,
    "zEndstopBackMove": 2,
    "xEndstopRetestFactor": 3,
    "yEndstopRetestFactor": 3,
    "zEndstopRetestFactor": 4,
    "xMinPin": "ORIG_X_MIN_PIN",
    "yMinPin": "ORIG_Y_MIN_PIN",
    "zMinPin": "ORIG_Z_MIN_PIN",
    "xMaxPin": -1,
    "yMaxPin": -1,
    "zMaxPin": -1,
    "deltaHomeOnPower": "0",
    "fanBoardPin": -1,
    "heaterPWMSpeed": 0,
    "featureBabystepping": "1",
    "babystepMultiplicator": 1,
    "hasMAX6675": false,
    "hasMAX31855": false,
    "hasGeneric1": false,
    "hasGeneric2": false,
    "hasGeneric3": false,
    "hasUser0": true,
    "hasUser1": true,
    "hasUser2": false,
    "numExtruder": 1,
    "version": 91.7
}
========== End configuration string ==========

*/
