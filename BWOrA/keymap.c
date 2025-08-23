#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_169_255_255,
  HSV_0_255_255,
  HSV_74_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  MAC_DND,
  MAC_LOCK,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    MAC_LOCK,       LGUI(LSFT(KC_5)),LGUI(KC_V),     LGUI(KC_A),     LGUI(KC_C),     LGUI(LCTL(LSFT(KC_4))),                                KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_AUDIO_MUTE,  
    KC_NO,          KC_B,           MT(MOD_LALT, KC_L),MT(MOD_LGUI, KC_D),KC_W,           KC_Z,                                           KC_QUOTE,       KC_F,           MT(MOD_LGUI, KC_O),MT(MOD_LALT, KC_U),KC_J,           KC_NO,          
    KC_NO,          KC_N,           LT(3, KC_R),    LT(4, KC_T),    MT(MOD_LSFT, KC_S),MEH_T(KC_G),                                    MEH_T(KC_Y),    MT(MOD_LSFT, KC_H),LT(1, KC_A),    KC_E,           KC_I,           KC_NO,          
    KC_NO,          KC_Q,           KC_X,           ALL_T(KC_M),    MT(MOD_LCTL, KC_C),KC_V,                                           KC_K,           MT(MOD_LCTL, KC_P),KC_DOT,         KC_COMMA,       KC_SCLN,        KC_NO,          
                                                    LT(2, KC_F23),  KC_BSPC,                                        KC_F24,         KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_EQUAL,       KC_9,           KC_8,           KC_7,           KC_SLASH,                                       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_MINUS,       KC_3,           KC_2,           KC_1,           KC_PLUS,                                        LCTL(KC_COMMA), MT(MOD_LSFT | MOD_LALT, KC_DOT),KC_TRANSPARENT, MT(MOD_LALT, KC_TAB),KC_NO,          KC_NO,          
    KC_NO,          KC_UNDS,        KC_6,           KC_5,           KC_4,           KC_ASTR,                                        KC_NO,          KC_LEFT_CTRL,   KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, MT(MOD_LGUI, KC_BSPC),                                KC_COMMA,       KC_0
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_BSLS,        KC_LBRC,        KC_PIPE,        KC_AMPR,        KC_COMMA,                                       KC_UNDS,        KC_PLUS,        KC_AT,          KC_RBRC,        KC_CIRC,        KC_NO,          
    KC_NO,          KC_EXLM,        KC_LPRN,        KC_COLN,        KC_LCBR,        KC_RABK,                                        KC_LABK,        KC_RCBR,        KC_DQUO,        KC_RPRN,        KC_EQUAL,       KC_NO,          
    KC_NO,          KC_TILD,        KC_HASH,        KC_PERC,        KC_DLR,         KC_ASTR,                                        KC_GRAVE,       KC_QUES,        KC_DOT,         KC_MINUS,       KC_SLASH,       KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          LCTL(KC_COMMA), KC_F23
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LGUI(KC_UP),    LGUI(KC_LEFT),  KC_UP,          LGUI(KC_RIGHT), LGUI(KC_DOWN),  KC_NO,          
    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          OSM(MOD_LSFT),  KC_NO,                                          LALT(KC_LEFT),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       LALT(KC_RIGHT), KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          ST_MACRO_0,     ST_MACRO_1
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          MAC_DND,        LALT(LGUI(LCTL(LSFT(KC_M)))),KC_BRIGHTNESS_UP,KC_BRIGHTNESS_DOWN,QK_BOOT,        KC_NO,          
    KC_NO,          KC_NO,          OSM(MOD_LALT),  KC_TRANSPARENT, OSM(MOD_LSFT),  KC_NO,                                          LALT(LSFT(KC_SCLN)),KC_ENTER,       KC_ESCAPE,      KC_TAB,         CW_TOGG,        KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          OSM(MOD_LCTL),  KC_NO,                                          RGB_TOG,        RGB_VAD,        RGB_VAI,        HSV_169_255_255,HSV_0_255_255,  KC_NO,          
                                                    OSM(MOD_LGUI),  KC_NO,                                          RGB_MODE_FORWARD,HSV_74_255_255
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(4, KC_T):
            return TAPPING_TERM -45;
        case MT(MOD_LSFT, KC_S):
            return TAPPING_TERM -45;
        case LT(2, KC_F23):
            return TAPPING_TERM -45;
        case MT(MOD_LSFT, KC_H):
            return TAPPING_TERM -45;
        case LT(1, KC_A):
            return TAPPING_TERM -45;
        default:
            return TAPPING_TERM;
    }
}







bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LALT(SS_TAP(X_UP)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LALT(SS_TAP(X_DOWN)));
    }
    break;
    case MAC_DND:
      HSS(0x9B);
    case MAC_LOCK:
      HCS(0x19E);

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_74_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(74,255,255);
      }
      return false;
  }
  return true;
}
