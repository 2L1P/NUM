#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
                 TG(1),   KC_PSLS, KC_PAST, KC_PMNS,
                 KC_7,    KC_8,    KC_9,
                 KC_4,    KC_5,    KC_6,    KC_PPLS,
                 KC_1,    KC_2,    KC_3,
                          KC_0,    KC_DOT,  KC_ENT
               ),

    [1] = LAYOUT(
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                 KC_HOME, KC_UP,   KC_PGUP,
                 KC_LEFT, KC_TRNS, KC_RGHT, KC_TRNS,
                 KC_END,  KC_DOWN, KC_PGDN,
                          KC_INS,  KC_DEL,  KC_TRNS
               ),


};
