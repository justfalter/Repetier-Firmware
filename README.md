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
[Check issue list](https://github.com/luc-github/Repetier-Firmware/issues)
	
***
##Implemented
* Standard GCODE commands
* Dual extruders support
* Single Fan / Dual fans support according printer configuration
* Repurpose of second fan usage to be controlled by M106/M107 commands on Da Vinci 2.0
* Sound and Light management, including powersaving function
* Cleaning Nozzle(s) by menu and by command
* Load / Unload filament by menu
* Sensor support for 1.0 and 2.0
* Auto Z-probe
* Dripbox cleaning
* Advanced/Easy menu
* Loading FailSafe settings

***
##Known Issues
* Printer freeze when unplug from repetier host if no clean de-connection (hot unplug / computer go to stand by ...), 
and [Check issue list](https://github.com/luc-github/Repetier-Firmware/issues)
	
***
Current menu: <img src='https://github.com/luc-github/Repetier-Firmware/blob/davinci/Menu%20.png'>

Plan :  
Easy: <img src='https://cloud.githubusercontent.com/assets/8822552/4748170/bfa0b7e8-5a69-11e4-80b7-02b9c99fe122.png'>
Advanced :  <img src='https://cloud.githubusercontent.com/assets/8822552/4748932/bebab9e2-5a7c-11e4-8fea-cdbe3d70820c.png'>



* 
