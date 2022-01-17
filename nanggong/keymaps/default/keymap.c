#include "nanggong.h"
#include "rgblight.h"

// |-------------------------------------------------------------------------------------------------------|
// |  ESC |  1    |    2  |    3  |    4  |    5  |    6  |    7  |    8  |    9  |    10  |    -  |    =  |
// |------+-------+-------+-------+-------+-------+-------+-------+-------+-------+--------+-------+-------|
// |  TAB |    q  |    w  |    e  |    r  |    t  |    y  |    u  |    i  |    o  |    p   |    [  |    ]  |
// |------+-------+-------+-------+-------+-------+-------+-------+-------+-------+--------+-------+-------|
// |  Cap |    a  |    s  |    d  |    f  |    g  |    h  |    j  |    k  |    l  |    ;   |    '  |   Ent |
// |------+-------+-------+-------+-------+-------+-------+-------+-------+-------+--------+-------+-------|
// |  Shft|    z  |    x  |    c  |    v  |    b  |    n  |    m  |    ,  |    .  |    /   |   UP  |   Del |
// |------+-------+-------+-------+-------+-------+-------+-------+-------+-------+--------+-------+-------|
// |  CRTL   |   Win   |   ALT  |   FN    |     Space     |   Prn |    \  |   Back|    Left|   Down|  Right|
// |-------------------------------------------------------------------------------------------------------|

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, 
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_UP, KC_DEL, 
		KC_LCTL, KC_LGUI, KC_LALT, MO(1), KC_SPC, KC_PSCR, KC_BSLS, KC_BSPC, KC_LEFT, KC_DOWN, KC_RIGHT
    ),

    [1] = LAYOUT(
        KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, 
		KC_TRNS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, KC_TRNS, KC_TRNS, KC_P7, KC_P8, KC_P9, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_TRNS, KC_P4, KC_P5, KC_P6, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, RGB_M_R, RGB_M_G, RGB_M_SW, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1, KC_P2, KC_P3, KC_MSTP, KC_VOLU, KC_MPLY, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_NLCK, MO(2), KC_MPRV, KC_VOLD, KC_MNXT
    ),
};


const uint8_t RGBLED_RAINBOW_MOOD_INTERVALS[] PROGMEM = {120, 60, 30};
const uint8_t RGBLED_RAINBOW_SWIRL_INTERVALS[] PROGMEM = {100, 50, 20};

// Turn On RED Color LED For Indicator CAPSLOCK is On
const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    // {0, 1, HSV_RED},       // Light 1 LEDs, starting with LED 0
    {5, 1, HSV_RED}       // Light 1 LEDs, starting with LED 6
);

// Turn On YELLOW Color LED For Indicator FN or Function Press
const rgblight_segment_t PROGMEM my_function_layer[] = RGBLIGHT_LAYER_SEGMENTS( 
    {0, 1, HSV_YELLOW},
    {6, 1, HSV_YELLOW}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(	
    my_capslock_layer,
    my_function_layer
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

// Enable and disabling lighting layers
layer_state_t layer_state_set_user(layer_state_t state) {
    // Both layers will light up if both kb layers are active
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    return state;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}