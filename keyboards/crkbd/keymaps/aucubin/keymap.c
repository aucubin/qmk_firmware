#include QMK_KEYBOARD_H

enum layers {
    _ALPHA,
    _SYM,
    _NUM,
    _NAV
};

enum custom_keycodes {
    MACRO_UMLAUT = SAFE_RANGE,
    MACRO_ESZETT
};

const uint16_t PROGMEM zoom_in[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM zoom_out[] = {KC_W, KC_F, COMBO_END};
combo_t key_combos[] = {
    COMBO(zoom_in, LGUI(KC_EQUAL)),
    COMBO(zoom_out, LGUI(KC_MINUS))
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_ALPHA] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
  KC_ESC, KC_Q,            KC_W,            KC_F,            KC_P,            KC_B,                                                  KC_J,            KC_L,            KC_U,            KC_Y,         KC_SCLN,KC_ESC,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
  KC_ESC,              LCTL_T(KC_A),            LALT_T(KC_R),            LGUI_T(KC_S),            LSFT_T(KC_T), KC_G,          KC_M,            RSFT_T(KC_N),            LGUI_T(KC_E),            LALT_T(KC_I),            LCTL_T(KC_O),KC_ESC,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
  KC_ESC,               KC_Z,    KC_X,    KC_C,            KC_D,            KC_V,                                                  KC_K,            KC_H,KC_COMMA,  KC_DOT,        KC_SLASH,KC_ESC,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  KC_ESC,           MO(1),       KC_TAB,     LT(3, KC_SPACE),  LT(2, KC_BSPC),        KC_ENTER
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [_SYM] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
  XXXXXXX,XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,                                               KC_RBRC,   LSFT(KC_RBRC),      LSFT(KC_0),         XXXXXXX,   LSFT(KC_BSLS),XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
  XXXXXXX, KC_GRAVE,  LSFT(KC_GRAVE),  LSFT(KC_MINUS),        KC_EQUAL,         XXXXXXX,                                               KC_LBRC,   LSFT(KC_LBRC),      LSFT(KC_9),         XXXXXXX,         KC_BSLS,XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
  XXXXXXX,       XXXXXXX,         XXXXXXX,  LSFT(KC_EQUAL),        KC_MINUS,         XXXXXXX,                                               MACRO_UMLAUT,         MACRO_ESZETT,   LSFT(KC_SCLN),         LSFT(KC_QUOTE),        KC_QUOTE,XXXXXXX,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  _______,         _______,         _______,             _______,         _______,         _______
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [_NUM] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
  XXXXXXX,LSFT(KC_1),      LSFT(KC_2),      LSFT(KC_3),      LSFT(KC_4),      LSFT(KC_5),                                            LSFT(KC_6),      LSFT(KC_7),      LSFT(KC_8),   LSFT(KC_BSLS),         XXXXXXX,XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
  XXXXXXX, KC_1,            KC_2,            KC_3,            KC_4,            KC_5,                                                  KC_6,            KC_7,            KC_8,            KC_9,            KC_0,XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
  XXXXXXX,   XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,                                               XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,XXXXXXX,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  _______,         _______,         _______,             _______,         _______,         _______
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [_NAV] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
  XXXXXXX,QK_BOOT,           KC_F1,           KC_F4,           KC_F7,          KC_F10,                                               XXXXXXX,         KC_HOME,           KC_UP,          KC_END,         XXXXXXX,XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
  XXXXXXX,XXXXXXX,           KC_F2,           KC_F5,           KC_F8,          KC_F11,                                               XXXXXXX,         KC_LEFT,         KC_DOWN,        KC_RIGHT,         XXXXXXX,XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
  XXXXXXX,XXXXXXX,           KC_F3,           KC_F6,           KC_F9,          KC_F12,                                               XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,       KC_DELETE,XXXXXXX,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  _______,         _______,         _______,             _______,         _______,         _______
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  )
};

#define ANIM_INVERT false
#define ANIM_RENDER_WPM true
#define FAST_TYPE_WPM 45 //Switch to fast animation when over words per minute

#ifdef OLED_ENABLE
#include "demon.c"
#endif

#ifdef OLED_ENABLE
#include <stdio.h>

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
        case L_ADJUST|L_LOWER|L_RAISE:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_anim();
    }
    return false;
}

#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case MACRO_UMLAUT: {
            if(record->event.pressed) {
                SEND_STRING(SS_LALT("u"));
            }
            break;
        }
        case MACRO_ESZETT: {
            if(record->event.pressed) {
                SEND_STRING(SS_LALT("s"));
            }
            break;
        }
    }
    if (record->event.pressed) {
        set_keylog(keycode, record);
      }
    return true;
};
