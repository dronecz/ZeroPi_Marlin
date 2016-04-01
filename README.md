# ZeroPi_Marlin
ZeroPi Marlin firmware code

Only supports USB printing

SD card printing Currently not supported

LCD Currently not supported

EEPROM_SETTINGS Currently not supported  

 
Pin Description File :pin pins_ZEROPI.h  

ZeroPi**********3D printer  
SLOT1------------X motor  
SLOT2------------Y motor    
SLOT3------------Z motor  
SLOT4------------E motor    
56---------------FAN_PIN  
57---------------HEATER_0_PIN  
A4(T0)-----------TEMP_0_PIN

31//Rx-----------X_STOP_PIN  
30//Tx-----------Y_STOP_PIN  
58//SWCLK--------Z_STOP_PIN  

X_STOP_PIN, Y_STOP_PIN, Z_STOP_PIN: It allows users to modify on pins_ZEROPI.h  
for example:  
```
#define X_STEP_PIN          4 
#define X_DIR_PIN           3  
#define X_ENABLE_PIN        44  
#define X_STOP_PIN          (14)A0  

#define Y_STEP_PIN          6
#define Y_DIR_PIN           5
#define Y_ENABLE_PIN        48
#define Y_STOP_PIN          (15)A1

#define Z_STEP_PIN          12
#define Z_DIR_PIN           10
#define Z_ENABLE_PIN        52
#define Z_STOP_PIN          (16)A2
```