##DaVinci FW based on Repetier
============================

This fw is based on repetier fw and modified to work with DaVinci 1.0, 2.0 single fan and 2.0.   
It works with host software like [repetier host](http://repetier.com), or as stand alone if you use a WIFI SD Card.

You can see more on [Voltivo forum](http://voltivo.com/forum/davinci-firmware).

Current firmware is based on version of  modified [repetier FW](https://github.com/repetier/Repetier-Firmware) 0.91 : [bgm370 Da Vinci 1.0 FW](https://github.com/bgm370/Repetier-Firmware) 

It gets rid off Da Vinci software and filament restrictions: it allows to use clear ABS because it do not use sensor, as well as others brand name filaments because it does not use cartridge chip, it allows any slicer or third-party host software usage in normal way. 

##Installation
Use arduino IDE supporting arduino DUE, [version 1.5.8+](http://arduino.cc/en/Main/Software#toc3), variant.cpp need to be updated in arduino directory, the ino file is the repetier.ino located in src\ArduinoDUE\Repetier directory.
For upgrade from stock FW and revert to, please check DaVinci forum.

Do not forget to modify the configuration.h to match the targeted Da Vinci 1.0, 2.0 SF or 2.0. (number of extruders and fans)

***
##TODO
This is the plan of missing features to be done in addition of bugs fixes:  
* UI improvement: Menu looks/feel
* Add Clean Box function from menu
* Add Load/unload filament from menu
* Add Stop print any time from menu
* Add Pause print any time from menu allowing
	* Change filament
	* Clean nozzle
	* TBD..
* Add some fancy sounds for specific actions like:
	* temperature reached for heating function
	* when user action is requested like for clean nozzle
	* when printer is power on, some welcoming ``"TADA"`` 
	* when printing is done , some audio sound

***
##Known Issues
* Printer freeze when unplug from repetier host if no clean de-connection (hot unplug / computer go to stand by ...), 
	
***
## Current LCD Menu	for Da Vinci 2.0 duo
* Keys:
	`/\`	`Home`
`<` `Ok` `>`
    `\/`

	*Down
	
* Main Screen
```
	* Page 1 - sum up of temperatures, Z pos and speed
	! 34/250!34/250
	H 34/ 90Mul:100%
	Z:   0.00
	Printer ready.
```

	* Page 2 - position
```
	X:   0.00mm
	Y:   0.00mm
	Z:   0.00mm
	Printer ready.
```

	* Page 3 - temperatures
```
	E1: 34/250'C->100
	E2: 34/250'C->100
	B: 34/ 90'C->100%
	Printer ready.
```
	* Page 4 - Printing time
```
	Printing time
	    0 days  0:00
	Filament printed
	      0.0m
```

* Menu (when Ok key is pressed)
```
	[Quick Settings](#quick-settings)
	[Print file](#print-file)
	[Position](#position)
	[Extruder](#extruder)
	[SD Card](#sd-card)
	[Debugging](#debugging)
	[Configuration](#configuration)  
```
---
###Quick Settings
```
	Home All
	Z Babystepping
	Speed Mul.:100%
	Flow Mul.:100%
	Lights :On
	Sound :On
	Powersave:30min
	Cleaning Nozzle
	Preheat PLA
	Preheat ABS
	Cooldown
	Set to Origin
	Disable stepper
```
---
###Print file

---
###Position

---
###Extruder

---
###SD Card

---
###Debugging

---
###Configuration

