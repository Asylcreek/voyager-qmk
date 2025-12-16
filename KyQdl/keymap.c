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
  MAC_DND,
  MAC_LOCK,
  DRAG_SCROLL,
  TOGGLE_SCROLL,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    MAC_LOCK,       LGUI(LSFT(KC_5)),LGUI(KC_V),     LGUI(KC_A),     LGUI(KC_C),     LGUI(LCTL(LSFT(KC_4))),                                KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_AUDIO_MUTE,  
    KC_NO,          KC_B,           KC_L,           KC_D,           KC_W,           KC_Z,                                           KC_J,           KC_F,           KC_O,           KC_U,           KC_NO,          KC_NO,          
    KC_NO,          ALL_T(KC_N),    MT(MOD_LALT, KC_R),MT(MOD_LGUI, KC_T),MEH_T(KC_S),    LT(6, KC_G),                                    LT(5, KC_Y),    MEH_T(KC_H),    MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_E),ALL_T(KC_I),    KC_NO,          
    KC_NO,          KC_Q,           KC_X,           KC_M,           MT(MOD_LCTL, KC_C),KC_V,                                           KC_K,           MT(MOD_LCTL, KC_P),KC_DOT,         KC_COMMA,       KC_SCLN,        KC_NO,          
                                                    LT(2, KC_F23),  LT(4, KC_BSPC),                                 MT(MOD_LSFT, KC_ENTER),LT(1, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_9,           KC_8,           KC_7,           KC_NO,                                          KC_NO,          KC_NO,          LCTL(KC_COMMA), KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_DELETE,      MT(MOD_LALT, KC_3),MT(MOD_LGUI, KC_2),MT(MOD_LSFT, KC_1),KC_NO,                                          KC_NO,          MT(MOD_LSFT | MOD_LALT, KC_0),OSM(MOD_LGUI),  OSM(MOD_LALT),  KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_6,           KC_5,           MT(MOD_LCTL, KC_4),KC_NO,                                          KC_NO,          MT(MOD_LCTL, KC_TAB),KC_DOT,         KC_COMMA,       KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_BSLS,        KC_LABK,        KC_PIPE,        KC_PERC,        KC_TILD,                                        KC_UNDS,        KC_QUOTE,       KC_EQUAL,       KC_RABK,        KC_NO,          KC_NO,          
    KC_NO,          KC_LBRC,        KC_LCBR,        KC_AMPR,        KC_LPRN,        KC_PLUS,                                        KC_MINUS,       KC_RPRN,        KC_DQUO,        KC_RCBR,        KC_RBRC,        KC_NO,          
    KC_NO,          KC_HASH,        KC_GRAVE,       KC_DLR,         KC_EXLM,        KC_ASTR,                                        KC_SLASH,       KC_COLN,        KC_QUES,        KC_AT,          KC_CIRC,        KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          KC_F24,         LT(3, KC_F23)
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_9,           KC_8,           KC_7,           KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_3,           KC_2,           KC_1,           KC_NO,                                          KC_NO,          KC_0,           KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_6,           KC_5,           KC_4,           KC_NO,                                          KC_NO,          KC_NO,          KC_DOT,         KC_COMMA,       KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          LGUI(KC_LBRC),  KC_NO,          LGUI(KC_RBRC),  QK_LLCK,                                        KC_NO,          LGUI(KC_LEFT),  KC_UP,          LGUI(KC_RIGHT), KC_NO,          KC_NO,          
    KC_NO,          LCTL(KC_TAB),   KC_MS_BTN2,     DRAG_SCROLL,    KC_MS_BTN1,     LALT(LGUI(LCTL(LSFT(KC_S)))),                                LALT(KC_LEFT),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       RALT(KC_RIGHT), KC_NO,          
    KC_NO,          LALT(LGUI(LCTL(LSFT(KC_C)))),LALT(KC_MS_BTN1),LGUI(KC_MS_BTN1),LSFT(KC_MS_BTN1),TOGGLE_SCROLL,                                  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_F24,         KC_F23
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          ST_MACRO_0,     ST_MACRO_1,     KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,                                     KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    ST_MACRO_12,    ST_MACRO_13,                                    KC_NO,          KC_NO
  ),
  [6] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          RGB_VAD,        RGB_VAI,        KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 LED_LEVEL,      LALT(LGUI(LCTL(LSFT(KC_M)))),KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,MAC_DND,        KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          RGB_TOG,        RGB_MODE_FORWARD,HSV_0_255_255,  HSV_169_255_255,HSV_74_255_255, QK_BOOT,        
                                                    KC_NO,          KC_NO,                                          LSFT(KC_ENTER), KC_NO
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_M, KC_X, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_DOT, KC_COMMA, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ESCAPE),
    COMBO(combo1, CW_TOGG),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(2, KC_F23):
            return TAPPING_TERM -70;
        case LT(4, KC_BSPC):
            return TAPPING_TERM -70;
        case MT(MOD_LSFT, KC_ENTER):
            return TAPPING_TERM -70;
        case LT(1, KC_SPACE):
            return TAPPING_TERM -70;
        default:
            return TAPPING_TERM;
    }
}



extern bool set_scrolling;
extern bool navigator_turbo;
extern bool navigator_aim;




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX: 
    // Mouse keys with modifiers work inconsistently across operating systems, this makes sure that modifiers are always
    // applied to the mouse key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
    if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LSFT(SS_TAP(X_SLASH)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_C));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_COMMA));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LSFT(SS_TAP(X_L)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LSFT(SS_TAP(X_QUOTE)));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_O));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_QUOTE));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_L));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LSFT(SS_TAP(X_5)));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_LBRC));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LALT(SS_TAP(X_DOWN)));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LALT(SS_TAP(X_UP)));
    }
    break;
    case MAC_DND:
      HSS(0x9B);
    case MAC_LOCK:
      HCS(0x19E);

    case DRAG_SCROLL:
      if (record->event.pressed) {
        set_scrolling = true;
      } else {
        set_scrolling = false;
      }
      return false;
    case TOGGLE_SCROLL:
      if (record->event.pressed) {
        set_scrolling = !set_scrolling;
      }
      return false;
    break;
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
