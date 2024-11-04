#include QMK_KEYBOARD_H

enum layers {
    _ALPHA,
    _SYM,
    _NUM,
    _NAV
};

enum combos {
    COMBO_CAPS_WORD
};

const uint16_t PROGMEM combo_caps_word[] = {KC_G, KC_M, COMBO_END};

combo_t key_combos[] = {
    COMBO(combo_caps_word, CW_TOGG)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_ALPHA] = LAYOUT_split_3x5_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
                 KC_Q,            KC_W,            KC_F,            KC_P,            KC_B,                                                  KC_J,            KC_L,            KC_U,            KC_Y,         KC_SCLN,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
                 LCTL_T(KC_A),            LALT_T(KC_R),            LGUI_T(KC_S),            LSFT_T(KC_T), KC_G,          KC_M,            LSFT_T(KC_N),            LGUI_T(KC_E),            LALT_T(KC_I),            LCTL_T(KC_O),
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
                 KC_Z,    KC_X,    KC_C,            KC_D,            KC_V,                                                  KC_K,            KC_H,KC_COMMA,  KC_DOT,        KC_SLASH,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  KC_ESC,           MO(1),       KC_TAB,     LT(3, KC_SPACE),  LT(2, KC_BSPC),        KC_ENTER
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [_SYM] = LAYOUT_split_3x5_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
              XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,                                               KC_RBRC,   LSFT(KC_RBRC),      LSFT(KC_0),         XXXXXXX,   LSFT(KC_BSLS),
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
             KC_GRAVE,  LSFT(KC_GRAVE),  LSFT(KC_MINUS),        KC_EQUAL,         KC_BTN2,                                               KC_LBRC,   LSFT(KC_LBRC),      LSFT(KC_9),         XXXXXXX,         KC_BSLS,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,         XXXXXXX,  LSFT(KC_EQUAL),        KC_MINUS,         KC_BTN3,                                               XXXXXXX,         XXXXXXX,   LSFT(KC_SCLN),         XXXXXXX,        KC_QUOTE,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  _______,         _______,         _______,             _______,         _______,         _______
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [_NUM] = LAYOUT_split_3x5_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
           LSFT(KC_1),      LSFT(KC_2),      LSFT(KC_3),      LSFT(KC_4),      LSFT(KC_5),                                            LSFT(KC_6),      LSFT(KC_7),      LSFT(KC_8),   LSFT(KC_BSLS),         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
                 KC_1,            KC_2,            KC_3,            KC_4,            KC_5,                                                  KC_6,            KC_7,            KC_8,            KC_9,            KC_0,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,                                               XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  _______,         _______,         _______,             _______,         _______,         _______
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [_NAV] = LAYOUT_split_3x5_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
            XXXXXXX,           KC_F1,           KC_F4,           KC_F7,          KC_F10,                                               XXXXXXX,         KC_HOME,           KC_UP,          KC_END,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
               XXXXXXX,           KC_F2,           KC_F5,           KC_F8,          KC_F11,                                               XXXXXXX,         KC_LEFT,         KC_DOWN,        KC_RIGHT,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,           KC_F3,           KC_F6,           KC_F9,          KC_F12,                                               XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,       KC_DELETE,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  _______,         _______,         _______,             _______,         _______,         _______
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  )
};
