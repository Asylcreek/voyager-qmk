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
};



#define DUAL_FUNC_0 LT(13, KC_F2)
#define DUAL_FUNC_1 LT(10, KC_F20)
#define DUAL_FUNC_2 LT(13, KC_O)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_NO,          LALT(LGUI(KC_J)),LGUI(KC_V),     LGUI(KC_A),     LGUI(KC_C),     DUAL_FUNC_0,                                    DUAL_FUNC_1,    KC_MEDIA_PLAY_PAUSE,LALT(KC_BSPC),  LGUI(KC_BSPC),  KC_DELETE,      KC_NO,          
    KC_ESCAPE,      KC_B,           KC_L,           KC_D,           KC_W,           KC_Z,                                           KC_QUOTE,       KC_F,           KC_O,           KC_U,           KC_J,           KC_BSPC,        
    CW_TOGG,        LT(2, KC_N),    MT(MOD_LALT, KC_R),MT(MOD_LGUI, KC_T),MEH_T(KC_S),    ALL_T(KC_G),                                    ALL_T(KC_Y),    MEH_T(KC_H),    MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_E),LT(3, KC_I),    KC_TAB,         
    KC_NO,          KC_Q,           KC_X,           KC_M,           MT(MOD_LCTL, KC_C),LT(5, KC_V),                                    LT(5, KC_K),    MT(MOD_LCTL, KC_P),KC_DOT,         KC_COMMA,       KC_SCLN,        DUAL_FUNC_2,    
                                                    MT(MOD_LSFT, KC_F23),KC_ENTER,                                       KC_F24,         LT(1, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_SPACE,       KC_GRAVE,       KC_AMPR,        KC_TILD,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_PIPE,        KC_RBRC,        KC_9,           KC_8,           KC_7,           KC_LBRC,                                        KC_UNDS,        KC_PLUS,        KC_COLN,        KC_DQUO,        KC_NO,          KC_NO,          
    KC_BSLS,        KC_RPRN,        KC_3,           KC_2,           KC_1,           KC_LPRN,                                        KC_MINUS,       KC_0,           KC_LABK,        KC_RABK,        KC_EQUAL,       KC_NO,          
    KC_NO,          KC_RCBR,        KC_6,           KC_5,           KC_4,           KC_LCBR,                                        KC_SLASH,       KC_QUES,        KC_DOT,         KC_COMMA,       KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_BSPC,                                        KC_NO,          KC_NO
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_PAGE_UP,     LGUI(KC_LEFT),  KC_UP,          LGUI(KC_RIGHT), KC_PGDN,        KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          OSM(MOD_LGUI),  KC_NO,          KC_NO,                                          LALT(KC_LEFT),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       LALT(KC_RIGHT), KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    OSM(MOD_LSFT),  KC_NO,                                          KC_NO,          OSM(MOD_HYPR)
  ),
  [3] = LAYOUT_voyager(
    ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,                                     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    ST_MACRO_6,     ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    ST_MACRO_12,    ST_MACRO_13,    ST_MACRO_14,    ST_MACRO_15,    ST_MACRO_16,    ST_MACRO_17,                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    ST_MACRO_18,    ST_MACRO_19,    ST_MACRO_20,    ST_MACRO_21,    ST_MACRO_22,    ST_MACRO_23,                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    ST_MACRO_24,    ST_MACRO_25,                                    KC_TRANSPARENT, KC_NO
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          QK_BOOT,        KC_MEDIA_NEXT_TRACK,KC_AUDIO_MUTE,  LALT(LGUI(LCTL(LSFT(KC_M)))),KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          MAC_DND,        KC_MEDIA_PREV_TRACK,KC_BRIGHTNESS_UP,KC_BRIGHTNESS_DOWN,KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          HSV_0_255_255,  HSV_169_255_255,RGB_VAI,        RGB_VAD,        RGB_TOG,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    HSV_74_255_255, RGB_MODE_FORWARD,                                KC_NO,          KC_NO
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          LGUI(KC_0),     LGUI(LSFT(KC_R)),LGUI(LSFT(KC_T)),LGUI(LSFT(KC_4)),KC_NO,                                          ST_MACRO_26,    LALT(LSFT(KC_7)),LALT(LSFT(KC_8)),LALT(LSFT(KC_9)),LALT(LSFT(KC_0)),KC_NO,          
    KC_NO,          LGUI(KC_EQUAL), LGUI(KC_3),     LGUI(KC_2),     LGUI(KC_1),     LGUI(KC_GRAVE),                                 LALT(LSFT(KC_H)),LCTL(KC_1),     LCTL(KC_2),     LCTL(KC_3),     LALT(KC_0),     KC_NO,          
    KC_NO,          LGUI(KC_MINUS), LGUI(KC_6),     LGUI(KC_5),     LGUI(KC_4),     LALT(LGUI(KC_M)),                                LALT(LSFT(KC_L)),LCTL(KC_4),     LCTL(KC_5),     LCTL(KC_6),     LALT(KC_SLASH), KC_NO,          
                                                    LGUI(LSFT(KC_C)),LALT(LGUI(KC_BSPC)),                                LALT(LSFT(KC_EQUAL)),LALT(LSFT(KC_MINUS))
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
        case DUAL_FUNC_0:
            return TAPPING_TERM -55;
        case MT(MOD_LSFT, KC_F23):
            return TAPPING_TERM -55;
        case DUAL_FUNC_1:
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
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LSFT(SS_TAP(X_SLASH)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_5));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_6));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_7));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_8));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_9));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LALT(SS_TAP(X_RIGHT)));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_0));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_1));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_2));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_3));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_4));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LALT(SS_TAP(X_LEFT)));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LSFT(SS_TAP(X_L)));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LSFT(SS_TAP(X_5)));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LSFT(SS_TAP(X_QUOTE)));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_C));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_O));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_L));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_COMMA));
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_QUOTE));
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_LBRC));
    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LALT(SS_TAP(X_DOWN)));
    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LALT(SS_TAP(X_UP)));
    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_SCLN)))SS_DELAY(100)  SS_TAP(X_F));
    }
    break;
    case MAC_DND:
      HSS(0x9B);

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(LCTL(LSFT(KC_4))));
        } else {
          unregister_code16(LGUI(LCTL(LSFT(KC_4))));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(LSFT(KC_5)));
        } else {
          unregister_code16(LGUI(LSFT(KC_5)));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_AUDIO_VOL_DOWN);
        } else {
          unregister_code16(KC_AUDIO_VOL_DOWN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_AUDIO_VOL_UP);
        } else {
          unregister_code16(KC_AUDIO_VOL_UP);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(LCTL(KC_Q)));
        } else {
          unregister_code16(LGUI(LCTL(KC_Q)));
        }
      } else {
        if (record->event.pressed) {
          layer_on(4);
        } else {
          layer_off(4);
        }  
      }  
      return false;
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


