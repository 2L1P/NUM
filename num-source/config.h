#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1338
#define PRODUCT_ID      0x2023
#define DEVICE_VER      0x0001
#define MANUFACTURER    2L1P
#define PRODUCT         num

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2 }
#define MATRIX_COL_PINS { B5, B4, E6, D7 }
#define UNUSED_PINS

/* media key slowdown for windows */
#define TAP_CODE_DELAY 20

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

/* ws2812 RGB LED */
#define RGB_DI_PIN B6

#ifdef RGBLIGHT_ENABLE
#define RGBLED_NUM 4   // Number of LEDs
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
