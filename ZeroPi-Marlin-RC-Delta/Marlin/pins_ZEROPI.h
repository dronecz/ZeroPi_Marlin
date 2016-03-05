/**
 * Board ZeroPi pin assignments
 */

#define X_STEP_PIN          4
#define X_DIR_PIN           3
#define X_ENABLE_PIN        44
#define X_STOP_PIN          14

#define Y_STEP_PIN          6
#define Y_DIR_PIN           5
#define Y_ENABLE_PIN       48
#define Y_STOP_PIN          15

#define Z_STEP_PIN          12
#define Z_DIR_PIN           10
#define Z_ENABLE_PIN       52
#define Z_STOP_PIN          16
//#define Z_MIN_PIN          17
////#define Z_MIN          17
//#define Z_MAX_PIN          16


#if ENABLED(Z_MIN_PROBE_ENDSTOP)
  // Define a pin to use as the signal pin on Arduino for the Z_PROBE endstop.
  #define Z_MIN_PROBE_PIN  17
#endif


#define E0_STEP_PIN         8
#define E0_DIR_PIN          9
#define E0_ENABLE_PIN      11

#define SDPOWER            -1
#define SDSS               A3
#define LED_PIN            -1
#define FAN_PIN            56
#define PS_ON_PIN          -1
#define KILL_PIN           -1

#define HEATER_0_PIN       57
#define HEATER_1_PIN       -1
#define HEATER_2_PIN       -1
#define TEMP_0_PIN          4   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!
#define TEMP_1_PIN         -1   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!
#define TEMP_2_PIN         -1   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!
#define HEATER_BED_PIN     -1
#define TEMP_BED_PIN       -1
