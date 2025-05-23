#include QMK_KEYBOARD_H
#include "custom.c"
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

#define MAGIC QK_AREP
#define PRE_REPEAT LT(2, KC_F23)
#define PRE_MAGIC LT(4, KC_F24)
#define PRE_SELLINE KC_F20
#define PRE_SELWORD KC_F21
#define PRE_SELWORDBAK KC_F22

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_74_255_255,
  HSV_169_255_255,
  HSV_0_255_255,
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
  // Macros invoked through the Magic key.
  M_EQEQ,
  M_ARROW_FUNC,
  M_CLOSE_BRACE
};

#define DUAL_FUNC_0 LT(32, KC_F21)
#define DUAL_FUNC_1 LT(24, KC_H)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TAB,         KC_B,           KC_L,           KC_D,           KC_W,           KC_Z,                                           KC_QUOTE,       KC_F,           KC_O,           KC_U,           KC_J,           KC_MEDIA_PLAY_PAUSE,
    CW_TOGG,        MT(MOD_LCTL, KC_N),MT(MOD_LALT, KC_R),MT(MOD_LGUI, KC_T),MT(MOD_LSFT, KC_S),ALL_T(KC_G),                                    ALL_T(KC_Y),    MT(MOD_LSFT, KC_H),MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_E),MT(MOD_LCTL, KC_I),KC_DELETE,      
    LT(6, KC_AUDIO_VOL_DOWN),KC_Q,           KC_X,           KC_M,           KC_C,           KC_V,                                           KC_K,           KC_P,           KC_DOT,         KC_COMMA,       KC_SCLN,        LT(5, KC_AUDIO_VOL_UP),
    LALT(LGUI(KC_J)),LGUI(KC_V),     LGUI(KC_A),     LGUI(KC_C),     MEH_T(KC_BSPC), LT(2, KC_F23),                                  LT(1, KC_SPACE),MEH_T(KC_ESCAPE),KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    LT(3, KC_ENTER),LGUI(LCTL(LSFT(KC_4))),                                MAC_LOCK,       LT(4, KC_F24)
  ),
  [1] = LAYOUT_voyager(
    KC_PIPE,        KC_HASH,        KC_LPRN,        KC_RPRN,        KC_EQUAL,       KC_NO,                                          KC_NO,          KC_TILD,        KC_AMPR,        KC_PLUS,        KC_CIRC,        KC_NO,          
    KC_BSLS,        KC_EXLM,        KC_LCBR,        KC_RCBR,        KC_DQUO,        KC_DLR,                                         KC_UNDS,        KC_RABK,        KC_LABK,        KC_ASTR,        KC_MINUS,       KC_NO,          
    KC_NO,          KC_AT,          KC_LBRC,        KC_RBRC,        KC_COLN,        KC_PERC,                                        KC_GRAVE,       KC_QUES,        KC_DOT,         KC_COMMA,       KC_SLASH,       KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_BSPC,        KC_TRANSPARENT,                                 KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_ENTER,       KC_NO,                                          KC_NO,          KC_NO
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_EQUAL,       KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_NO,          
    KC_NO,          KC_LEFT_CTRL,   LSFT(KC_LEFT_ALT),KC_0,           KC_DOT,         KC_NO,                                          KC_ASTR,        KC_1,           KC_2,           KC_3,           KC_MINUS,       KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          QK_LLCK,        KC_COMMA,       KC_NO,                                          KC_PERC,        KC_4,           KC_5,           KC_6,           KC_SLASH,       KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_F23,         KC_BSPC,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_ENTER
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          LGUI(KC_LEFT),  KC_UP,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LALT(KC_LEFT),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       LALT(KC_RIGHT), KC_NO,          
    KC_NO,          KC_NO,          KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_NO,                                          KC_NO,          KC_PAGE_UP,     KC_PGDN,        LGUI(KC_RIGHT), KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_F21,         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_F22
  ),
  [4] = LAYOUT_voyager(
    ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,                                     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    ST_MACRO_6,     ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,                                    ST_MACRO_21,    ST_MACRO_22,    ST_MACRO_23,    ST_MACRO_24,    ST_MACRO_25,    KC_NO,          
    ST_MACRO_12,    ST_MACRO_13,    ST_MACRO_14,    ST_MACRO_15,    ST_MACRO_16,    ST_MACRO_17,                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          ST_MACRO_18,    ST_MACRO_19,                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    ST_MACRO_20,    KC_NO,                                          KC_NO,          KC_NO
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          DUAL_FUNC_0,    KC_AUDIO_MUTE,  LALT(LGUI(LCTL(LSFT(KC_M)))),KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          MAC_DND,        DUAL_FUNC_1,    KC_BRIGHTNESS_UP,KC_BRIGHTNESS_DOWN,KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          HSV_74_255_255, KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          RGB_VAI,        RGB_VAD,        KC_NO,                                          QK_BOOT,        RGB_TOG,        RGB_MODE_FORWARD,HSV_169_255_255,HSV_0_255_255,  KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [6] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_MS_WH_LEFT,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_RIGHT, KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_LEFT_GUI,    KC_NO,          KC_NO,                                          KC_NO,          KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LSFT(KC_MS_BTN1),KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          LGUI(KC_MS_BTN1)
  ),
  [7] = LAYOUT_voyager(
    KC_NO,          KC_NO,          LGUI(LSFT(KC_R)),LGUI(LSFT(KC_T)),LGUI(LSFT(KC_4)),KC_NO,                                          ST_MACRO_26,    LALT(LSFT(KC_7)),LALT(LSFT(KC_8)),LALT(LSFT(KC_9)),LALT(LSFT(KC_0)),KC_NO,          
    KC_NO,          LGUI(KC_EQUAL), LGUI(KC_3),     LGUI(KC_2),     LGUI(KC_1),     LGUI(KC_GRAVE),                                 LALT(LSFT(KC_EQUAL)),LCTL(KC_1),     LCTL(KC_2),     LCTL(KC_3),     LALT(KC_0),     KC_NO,          
    KC_NO,          LGUI(KC_MINUS), LGUI(KC_6),     LGUI(KC_5),     LGUI(KC_4),     KC_NO,                                          LALT(LSFT(KC_MINUS)),LCTL(KC_4),     LCTL(KC_5),     LCTL(KC_6),     KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          LGUI(KC_0),                                     LALT(LSFT(KC_H)),KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    LALT(LGUI(KC_BSPC)),KC_NO,                                          KC_NO,          LALT(LSFT(KC_L))
  ),
};
// clang-format on

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case MT(MOD_LSFT, KC_S):
    return TAPPING_TERM - 45;
  case LT(2, KC_F23):
    return TAPPING_TERM - 45;
  case MT(MOD_LSFT, KC_H):
    return TAPPING_TERM - 45;
  case LT(1, KC_SPACE):
    return TAPPING_TERM - 45;
  case DUAL_FUNC_0:
    return TAPPING_TERM - 45;
  case DUAL_FUNC_1:
    return TAPPING_TERM - 45;
  default:
    return TAPPING_TERM;
  }
}

bool caps_word_press_user(uint16_t keycode) {
  switch (keycode) {
  // Keycodes that continue Caps Word, with shift applied.
  case KC_A ... KC_Z:
  case KC_QUOTE:
    add_weak_mods(MOD_BIT(KC_LSFT)); // Apply shift to next key.
    return true;

  // Keycodes that continue Caps Word, without shifting.
  case KC_1 ... KC_0:
  case KC_BSPC:
  case KC_DEL:
    return true;

  default:
    return false; // Deactivate Caps Word.
  }
}

bool remember_last_key_user(uint16_t keycode, keyrecord_t *record,
                            uint8_t *remembered_mods) {
  if (keycode == PRE_REPEAT || keycode == PRE_MAGIC || keycode == KC_F23) {
    return false;
  }
  return true;
}

uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
  keycode = get_tap_keycode(keycode);

  if (mods & MOD_MASK_CTRL) {
    switch (keycode) {
    case KC_TAB:
      if ((mods & MOD_MASK_SHIFT) == 0) {
        return C(S(KC_TAB));
      }
      return C(KC_TAB);
    case KC_K:
      return C(KC_J);
    case KC_J:
      return C(KC_K);
    case KC_L:
      return C(KC_H);
    case KC_H:
      return C(KC_L);
    }
  }

  if ((mods & ~MOD_MASK_SHIFT) == 0) {
    switch (keycode) {
      // For navigating next/previous search results in Vim:
      // N -> Shift + N, Shift + N -> N.
    case KC_N:
      if ((mods & MOD_MASK_SHIFT) == 0) {
        return S(KC_N);
      }
      return KC_N;

    case KC_TAB:
      if ((mods & MOD_MASK_SHIFT) == 0) {
        return S(KC_TAB);
      }

      return KC_TAB;

    case KC_EXCLAIM:
    case KC_EQL:
      return M_EQEQ; // = -> ==, ! -> ==

    case KC_PLUS:
    case KC_MINUS:
    case KC_COLON:
    case KC_TILDE:
    case KC_ASTERISK:
      return KC_EQL; //

    case KC_RIGHT_PAREN:
      return M_ARROW_FUNC;

    case KC_LEFT_CURLY_BRACE:
      return M_CLOSE_BRACE;
    }
  }

  switch (keycode) {
  case PRE_SELWORDBAK:
    return PRE_SELWORD;
  case PRE_SELWORD:
    return PRE_SELWORDBAK;
  case KC_ENTER:
    return KC_ESCAPE;
  case KC_ESCAPE:
    return KC_ENTER;
  }

  return KC_TRNS;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_custom_shift_keys(keycode, record)) {
    return false;
  }

  if (!process_select_word(keycode, record)) {
    return false;
  }

  const uint8_t mods = get_mods();

  switch (keycode) {
  case KC_F23:
    if (record->event.pressed) {
      repeat_key_invoke(&record->event); // Repeat last key
      return false; // Return false to ignore further processing of key
    }
    break;
  case PRE_REPEAT:
    if (record->tap.count) {
      repeat_key_invoke(&record->event); // Repeat last key
      return false; // Return false to ignore further processing of key
    }
    break;
  case PRE_MAGIC:
    if (record->tap.count) {
      alt_repeat_key_invoke(&record->event); // Invoke alt key
      return false; // Return false to ignore further processing of key
    }
    break;
    // Macros invoked through the MAGIC key
  case M_EQEQ:
    if (record->event.pressed) {
      SEND_STRING_DELAY(/*=*/"==", TAP_CODE_DELAY);
    }
    break;
  case M_ARROW_FUNC:
    if (record->event.pressed) {
      SEND_STRING_DELAY(/*)*/ " => {};" SS_TAP(X_ESC) SS_TAP(X_H) SS_TAP(X_I)
                            SS_TAP(X_ENTER) SS_TAP(X_ESC) SS_LSFT(SS_TAP(X_O)),
                        TAP_CODE_DELAY);
    }
    break;
  case M_CLOSE_BRACE:
    if (record->event.pressed) {
      SEND_STRING_DELAY(/*)*/ "};" SS_TAP(X_ESC) SS_TAP(X_H) SS_TAP(X_I)
                            SS_TAP(X_ENTER) SS_TAP(X_ESC) SS_LSFT(SS_TAP(X_O)),
                        TAP_CODE_DELAY);
    }
    break;
  case KC_QUOTE: {
    static uint16_t registered_keycode = KC_NO;

    if (record->event.pressed) {
      process_caps_word(keycode, record);
      const bool shifted = (mods | get_weak_mods()) & MOD_MASK_SHIFT;
      clear_weak_mods();
      clear_mods();

      if (registered_keycode) { // Invoked through Repeat key.
        unregister_code16(registered_keycode);
      } else {
        registered_keycode = shifted ? KC_UNDS : KC_QUOTE;
      }

      register_code16(registered_keycode);
      set_mods(mods);
    } else if (registered_keycode) {
      unregister_code16(registered_keycode);
      registered_keycode = KC_NO;
    }
  }
    return false;
  case PRE_SELWORDBAK: // Backward word selection.
    if (record->event.pressed) {
      select_word_register('B');
    } else {
      select_word_unregister();
    }
    break;
  case PRE_SELWORD: // Forward word selection.
    if (record->event.pressed) {
      select_word_register('W');
    } else {
      select_word_unregister();
    }
    break;
  case PRE_SELLINE: // Line selection.
    if (record->event.pressed) {
      select_word_register('L');
    } else {
      select_word_unregister();
    }
    break;
  case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_LSFT(SS_TAP(X_L)));
    }
    break;
  case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_1));
    }
    break;
  case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_2));
    }
    break;
  case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_3));
    }
    break;
  case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_4));
    }
    break;
  case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_5));
    }
    break;
  case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_L));
    }
    break;
  case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_QUOTE));
    }
    break;
  case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_O));
    }
    break;
  case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_LSFT(SS_TAP(X_5)));
    }
    break;
  case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100)
                      SS_LSFT(SS_TAP(X_QUOTE)));
    }
    break;
  case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_S));
    }
    break;
  case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_C));
    }
    break;
  case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_COMMA));
    }
    break;
  case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_D));
    }
    break;
  case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100)
                      SS_LALT(SS_TAP(X_RIGHT)));
    }
    break;
  case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100)
                      SS_LALT(SS_TAP(X_LEFT)));
    }
    break;
  case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_LBRC));
    }
    break;
  case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_0));
    }
    break;
  case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100)
                      SS_LALT(SS_TAP(X_DOWN)));
    }
    break;
  case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_LALT(SS_TAP(X_UP)));
    }
    break;
  case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100)
                      SS_LSFT(SS_TAP(X_SLASH)));
    }
    break;
  case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_6));
    }
    break;
  case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_7));
    }
    break;
  case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_8));
    }
    break;
  case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_9));
    }
    break;
  case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_SCLN))) SS_DELAY(100) SS_TAP(X_F));
    }
  case MAC_DND:
    HSS(0x9B);
  case MAC_LOCK:
    HCS(0x19E);

  case DUAL_FUNC_0:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(KC_MEDIA_NEXT_TRACK);
      } else {
        unregister_code16(KC_MEDIA_NEXT_TRACK);
      }
    } else {
      if (record->event.pressed) {
        register_code16(KC_MEDIA_FAST_FORWARD);
      } else {
        unregister_code16(KC_MEDIA_FAST_FORWARD);
      }
    }
    return false;
  case DUAL_FUNC_1:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(KC_MEDIA_PREV_TRACK);
      } else {
        unregister_code16(KC_MEDIA_PREV_TRACK);
      }
    } else {
      if (record->event.pressed) {
        register_code16(KC_MEDIA_REWIND);
      } else {
        unregister_code16(KC_MEDIA_REWIND);
      }
    }
    return false;
  case RGB_SLD:
    if (record->event.pressed) {
      rgblight_mode(1);
    }
    return false;
  case HSV_74_255_255:
    if (record->event.pressed) {
      rgblight_mode(1);
      rgblight_sethsv(74, 255, 255);
    }
    return false;
  case HSV_169_255_255:
    if (record->event.pressed) {
      rgblight_mode(1);
      rgblight_sethsv(169, 255, 255);
    }
    return false;
  case HSV_0_255_255:
    if (record->event.pressed) {
      rgblight_mode(1);
      rgblight_sethsv(0, 255, 255);
    }
    return false;
  }
  return true;
}
