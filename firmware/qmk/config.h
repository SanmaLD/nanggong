#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    Sanma
#define PRODUCT         nanggong

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

/* key matrix pins        0   1   2   3   4   5   6   7   8   9    */
#define MATRIX_ROW_PINS { D3, D2, D0, D4, C6, D7, E6, B4, B5, F5 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6, D5 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 8

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS


#define RGB_DI_PIN D2 // this pin uses the same pin as row 2, so change this pin (WARNING)
#ifdef RGB_DI_PIN

#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 11
#define RGBLIGHT_HUE_STEP 5
#define RGBLIGHT_SAT_STEP 5
#define RGBLIGHT_VAL_STEP 5
#define RGBLIGHT_LAYERS
#define RGBLIGHT_SLEEP
#define RGBLIGHT_MAX_LAYERS 2
#endif
