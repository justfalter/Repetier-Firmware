#define CPU_ARCH	ARCH_ARM

#define ORIG_X_STEP_PIN		15
#define ORIG_X_DIR_PIN		14
#define ORIG_X_MIN_PIN		11
#define ORIG_X_MAX_PIN		-1
#define ORIG_X_ENABLE_PIN	29

#define ORIG_Y_STEP_PIN		30
#define ORIG_Y_DIR_PIN		12
#define ORIG_Y_MIN_PIN		68
#define ORIG_Y_MAX_PIN		-1
#define ORIG_Y_ENABLE_PIN	69

#define ORIG_Z_STEP_PIN		119	
#define ORIG_Z_DIR_PIN		118
#define ORIG_Z_MIN_PIN		124
#define ORIG_Z_MAX_PIN		-1
#define ORIG_Z_ENABLE_PIN	120

#define HEATER_1_PIN		17
#define TEMP_1_PIN		14 // ADC channel #, not a PIN #

#if NUM_EXTRUDER==1 
#define HEATER_0_PIN		16
#define TEMP_0_PIN		13 // ADC channel #, not a PIN #
#define FIL_SENSOR1_PIN          24
#define ORIG_E0_ENABLE_PIN	123
#define ORIG_E0_STEP_PIN	122
#define ORIG_E0_DIR_PIN		121
#else
//for davinci 2.0 reference is left extruder so need to exchange pins compare to 1.0
#define HEATER_2_PIN		16//HEATER_0_PIN //switch pin value 
#define TEMP_2_PIN		13//	TEMP_0_PIN  //switch pin value
#define HEATER_0_PIN            20
#define TEMP_0_PIN               9 // ADC channel #, not a PIN #
#define FIL_SENSOR1_PIN          129
#define FIL_SENSOR2_PIN          24
#define ORIG_E1_ENABLE_PIN	123//ORIG_E0_ENABLE_PIN //switch pin value
#define ORIG_E1_STEP_PIN	122//ORIG_E0_STEP_PIN   //switch pin value
#define ORIG_E1_DIR_PIN		121//ORIG_E0_DIR_PIN    //switch pin value

#define ORIG_E0_STEP_PIN        53
#define ORIG_E0_DIR_PIN          3
#define ORIG_E0_ENABLE_PIN     128

#endif
#define LIGHT_PIN       85
#define LED_PIN			-1
#define PS_ON_PIN		-1
#define ORIG_FAN_PIN		25
#define ORIG_FAN2_PIN		4	
#define TOP_SENSOR_PIN      6

#define SDSS			55
#define MOSI_PIN		43
#define MISO_PIN		73
#define SCK_PIN			42

#define SDPOWER                 -1
#define SDCARDDETECT            74
#define SDSUPPORT		true
#define SDCARDDETECTINVERTED	0
#define DUE_SOFTWARE_SPI
#define SDEEPROM

#define ZPROBE_ADJUST_ZMIN

#define E0_PINS ORIG_E0_STEP_PIN,ORIG_E0_DIR_PIN,ORIG_E0_ENABLE_PIN,
#define E1_PINS ORIG_E1_STEP_PIN,ORIG_E1_DIR_PIN,ORIG_E1_ENABLE_PIN,

