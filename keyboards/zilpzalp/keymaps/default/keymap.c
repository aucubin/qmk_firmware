// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
                 KC_W,    KC_F,    KC_P,    KC_B,       KC_J,    KC_L,    KC_U,    KC_Y,
        KC_R,    KC_S,    KC_T,    KC_H,    KC_K,       KC_X,    KC_N,    KC_A,    KC_I,    KC_O,
                 KC_C,    KC_G,    KC_D,                         KC_M,    KC_COMM, KC_DOT,
                                   KC_QUOT, KC_SPC,     KC_E,    KC_ENT
    )
};
