
  /*************************************
 * PICA Arduino shield configuration mjrice
 ************************************* */
 #if MB(PICA) || MB(BOARD_PICA_REVC)
 #define KNOWN_BOARD 1
 #define LARGE_FLASH true

 #define X_DIR_PIN         54
 #define X_STEP_PIN        55
 #define Y_DIR_PIN         56
 #define Y_STEP_PIN        57
 #define Z_DIR_PIN         58
 #define Z_STEP_PIN        59
 #define X_ENABLE_PIN      60     
 #define Y_ENABLE_PIN      61
 #define Z_ENABLE_PIN      62

 #define X_MIN_PIN         14
 #define X_MAX_PIN         15

 #define Y_MIN_PIN          16
 #define Y_MAX_PIN          17

 #define Z_MIN_PIN          23
 #define Z_MAX_PIN          22

 #define E0_STEP_PIN         67 
 #define E0_DIR_PIN          24
 #define E0_ENABLE_PIN       26

 #define E1_STEP_PIN         68 
 #define E1_DIR_PIN          28
 #define E1_ENABLE_PIN       27

 #define SDPOWER            -1
 #define LED_PIN            -1 
 #define PS_ON_PIN          -1
 #define KILL_PIN           -1

 #define SSR_PIN            6
 #define HEATER_BED_PIN     8 // heat bed
 
 #if MB(PICA_REVC)
 #define HEATER_0_PIN       10 // extruder 
 #define HEATER_1_PIN       2 // second extruder
 #define FAN_PIN            9
 #define FAN_2_PIN          7
#else
 #define HEATER_0_PIN       9 // extruder 
 #define HEATER_1_PIN       10 // second extruder
 #define FAN_PIN            11
 #define FAN_2_PIN          12
#endif

 #define TEMP_0_PIN         9   // ANALOG NUMBERING
 #define TEMP_1_PIN         10
 #define TEMP_BED_PIN       10
 #define TEMP_2_PIN         11
 #define TEMP_3_PIN         12

 // LCD interface pins
 #define LCD_PINS_RS 33
 #define LCD_PINS_ENABLE 30
 #define LCD_PINS_D4 35
 #define LCD_PINS_D5 32
 #define LCD_PINS_D6 37
 #define LCD_PINS_D7 36

 #define BTN_EN1 47
 #define BTN_EN2 48
 #define BTN_ENC 31  //the click 

 #define BLEN_C 2
 #define BLEN_B 1
 #define BLEN_A 0

 #define SD_DETECT_PIN 49
 #define BEEPER_PIN       29
 #define SDSS         53
 
 //encoder rotation values
 #define encrot0 0
 #define encrot1 2
 #define encrot2 3
 #define encrot3 1
 
#endif // PICA
