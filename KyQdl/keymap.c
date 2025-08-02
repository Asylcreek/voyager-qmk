#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_0_255_255,
  HSV_169_255_255,
  HSV_74_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
  MAC_DND,
  MAC_LOCK,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    MAC_LOCK,       LGUI(LSFT(KC_5)),LGUI(KC_V),     LGUI(KC_A),     LGUI(KC_C),     LGUI(LCTL(LSFT(KC_4))),                                KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_TAB,         KC_MEDIA_PLAY_PAUSE,KC_DELETE,      MAC_DND,        
    KC_ESCAPE,      KC_B,           KC_L,           MT(MOD_LALT, KC_D),KC_W,           KC_Z,                                           KC_QUOTE,       KC_F,           MT(MOD_LALT, KC_O),KC_U,           KC_J,           KC_SCLN,        
    KC_F24,         KC_N,           MT(MOD_LGUI, KC_R),MT(MOD_LSFT, KC_T),MEH_T(KC_S),    ALL_T(KC_G),                                    ALL_T(KC_Y),    MEH_T(KC_H),    MT(MOD_LSFT, KC_A),MT(MOD_LGUI, KC_E),KC_I,           KC_COMMA,       
    KC_NO,          KC_Q,           KC_X,           LT(2, KC_M),    MT(MOD_LCTL, KC_C),KC_V,                                           KC_K,           MT(MOD_LCTL, KC_P),LT(4, KC_DOT),  KC_MINUS,       KC_SLASH,       MO(3),          
                                                    LT(1, KC_F23),  KC_BSPC,                                        KC_ENTER,       LT(1, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_SPACE,       KC_HASH,        KC_TILD,        KC_NO,                                          KC_NO,          KC_EXLM,        KC_AMPR,        KC_AT,          KC_PERC,        KC_NO,          
    KC_PIPE,        KC_ASTR,        KC_9,           KC_8,           KC_7,           KC_CIRC,                                        KC_UNDS,        KC_LBRC,        KC_LCBR,        KC_RCBR,        KC_RBRC,        KC_GRAVE,       
    KC_BSLS,        KC_EQUAL,       KC_3,           KC_2,           KC_1,           KC_LABK,                                        KC_LPRN,        KC_0,           KC_COLN,        KC_DQUO,        KC_RPRN,        KC_COMMA,       
    KC_NO,          KC_DLR,         KC_6,           KC_5,           KC_4,           KC_RABK,                                        KC_PLUS,        KC_QUES,        KC_DOT,         KC_MINUS,       KC_SLASH,       KC_NO,          
                                                    KC_TRANSPARENT, KC_BSPC,                                        KC_BSPC,        LT(2, KC_F23)
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          LGUI(KC_UP),    KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_PAGE_UP,     LGUI(KC_LEFT),  KC_UP,          LGUI(KC_RIGHT), KC_PGDN,        KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LALT(KC_LEFT),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       LALT(KC_RIGHT), KC_NO,          
    KC_NO,          KC_NO,          KC_LEFT_GUI,    KC_NO,          KC_LEFT_SHIFT,  KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          KC_NO,          ST_MACRO_0
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          QK_BOOT,        KC_NO,          KC_AUDIO_MUTE,  KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_MEDIA_NEXT_TRACK,KC_MEDIA_PREV_TRACK,KC_BRIGHTNESS_UP,KC_BRIGHTNESS_DOWN,LALT(LGUI(LCTL(LSFT(KC_M)))),                                KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          HSV_0_255_255,  HSV_169_255_255,RGB_VAI,        RGB_VAD,        RGB_TOG,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    HSV_74_255_255, RGB_MODE_FORWARD,                                KC_NO,          KC_NO
  ),
  [4] = LAYOUT_voyager(
    ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,                                     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,    ST_MACRO_12,                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    ST_MACRO_13,    ST_MACRO_14,    ST_MACRO_15,    ST_MACRO_16,    ST_MACRO_17,    ST_MACRO_18,                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    ST_MACRO_19,    ST_MACRO_20,    ST_MACRO_21,    ST_MACRO_22,    ST_MACRO_23,    ST_MACRO_24,                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    ST_MACRO_25,    ST_MACRO_26,                                    KC_NO,          KC_NO
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { LT(1, KC_SPACE), LT(1, KC_F23), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, CW_TOGG),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LSFT, KC_T):
            return TAPPING_TERM -55;
        case LT(1, KC_F23):
            return TAPPING_TERM -55;
        case MT(MOD_LSFT, KC_A):
            return TAPPING_TERM -55;
        case LT(1, KC_SPACE):
            return TAPPING_TERM -55;
        default:
            return TAPPING_TERM;
    }
}



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_SCLN)))SS_DELAY(100)  SS_TAP(X_F));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LSFT(SS_TAP(X_SLASH)));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_5));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_6));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_7));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_8));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_9));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LALT(SS_TAP(X_RIGHT)));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_0));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_1));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_2));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_3));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_4));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LALT(SS_TAP(X_LEFT)));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LSFT(SS_TAP(X_L)));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LSFT(SS_TAP(X_5)));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LSFT(SS_TAP(X_QUOTE)));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_C));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_O));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_L));
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_COMMA));
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_QUOTE));
    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_LBRC));
    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LALT(SS_TAP(X_DOWN)));
    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LALT(SS_TAP(X_UP)));
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
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
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


