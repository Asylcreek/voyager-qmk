#include QMK_KEYBOARD_H
#include "custom.c"
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

#define MAGIC QK_AREP
#define PRE_REPEAT LT(1, KC_F23)
#define PRE_MAGIC LT(4, KC_F24)

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
  // Macros invoked through the Magic key.
  M_EQEQ,
  M_ARROW_FUNC,
  M_CLOSE_BRACE,
  M_ALT_DOLLAR
};

#define DUAL_FUNC_0 LT(2, KC_3)
#define DUAL_FUNC_1 LT(15, KC_F20)
#define DUAL_FUNC_2 LT(8, KC_Q)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    LALT(LGUI(KC_J)),OSL(6),         LGUI(KC_V),     LGUI(KC_A),     LGUI(KC_C),     DUAL_FUNC_0,                                    DUAL_FUNC_1,    KC_MEDIA_PLAY_PAUSE,OSM(MOD_MEH),   LALT(KC_BSPC),  KC_DELETE,      KC_NO,          
    KC_NO,          KC_B,           KC_L,           KC_D,           KC_W,           KC_Z,                                           KC_QUOTE,       KC_F,           KC_O,           KC_U,           KC_J,           KC_NO,          
    KC_NO,          KC_N,           KC_R,           KC_T,           KC_S,           KC_G,                                           KC_Y,           KC_H,           KC_A,           KC_E,           KC_I,           KC_NO,          
    KC_NO,          KC_Q,           KC_X,           KC_M,           KC_C,           KC_V,                                           KC_K,           KC_P,           KC_DOT,         KC_COMMA,       KC_SCLN,        DUAL_FUNC_2,    
                                                    LT(1, KC_F23),  LT(3, KC_BSPC),                                 LT(4, KC_F24),  LT(2, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          LSFT(KC_B),     LSFT(KC_L),     LSFT(KC_D),     LSFT(KC_W),     LSFT(KC_Z),                                     KC_UNDS,        LSFT(KC_F),     LSFT(KC_O),     LSFT(KC_U),     LSFT(KC_J),     KC_NO,          
    KC_NO,          LSFT(KC_N),     LSFT(KC_R),     LSFT(KC_T),     LSFT(KC_S),     LSFT(KC_G),                                     LSFT(KC_Y),     LSFT(KC_H),     LSFT(KC_A),     LSFT(KC_E),     LSFT(KC_I),     KC_NO,          
    KC_NO,          LSFT(KC_Q),     LSFT(KC_X),     LSFT(KC_M),     LSFT(KC_C),     LSFT(KC_V),                                     LSFT(KC_K),     LSFT(KC_P),     LSFT(KC_ENTER), LGUI(KC_ENTER), LALT(KC_ENTER), KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          KC_ESCAPE,      KC_ENTER
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_PIPE,        KC_BSLS,        KC_GRAVE,       KC_SPACE,       KC_TILD,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_RBRC,        KC_9,           KC_8,           KC_7,           KC_LBRC,                                        KC_UNDS,        KC_PLUS,        KC_COLN,        KC_DQUO,        KC_ASTR,        KC_NO,          
    KC_NO,          KC_RPRN,        KC_3,           KC_2,           KC_1,           KC_LPRN,                                        KC_MINUS,       KC_0,           KC_LABK,        KC_RABK,        KC_EQUAL,       KC_NO,          
    KC_NO,          KC_RCBR,        KC_6,           KC_5,           KC_4,           KC_LCBR,                                        KC_SLASH,       KC_QUES,        KC_DOT,         KC_COMMA,       KC_NO,          KC_NO,          
                                                    MT(MOD_LSFT, KC_F23),KC_TRANSPARENT,                                 KC_NO,          KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_PAGE_UP,     LGUI(KC_LEFT),  KC_UP,          LGUI(KC_RIGHT), KC_PGDN,        KC_NO,          
    KC_NO,          OSM(MOD_LSFT),  OSM(MOD_LALT),  OSM(MOD_LGUI),  OSM(MOD_LCTL),  OSM(MOD_HYPR),                                  LALT(KC_LEFT),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       LALT(KC_RIGHT), KC_NO,          
    KC_NO,          CW_TOGG,        KC_TAB,         KC_ESCAPE,      KC_ENTER,       LALT(KC_F),                                     LALT(LGUI(LCTL(LSFT(KC_H)))),LGUI(KC_SPACE), LALT(LCTL(LSFT(KC_SPACE))),LALT(KC_SPACE), KC_NO,          KC_NO,          
                                                    KC_NO,          KC_TRANSPARENT,                                 CW_TOGG,        KC_TAB
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,                                     ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,    ST_MACRO_12,    KC_NO,          
    KC_NO,          ST_MACRO_5,     LCTL(KC_L),     LCTL(KC_D),     LCTL(KC_W),     ST_MACRO_6,                                     ST_MACRO_13,    ST_MACRO_14,    LCTL(KC_COMMA), ST_MACRO_15,    ST_MACRO_16,    KC_NO,          
    KC_NO,          LCTL(KC_N),     LCTL(KC_R),     LCTL(KC_U),     LCTL(KC_P),     ST_MACRO_7,                                     ST_MACRO_17,    ST_MACRO_18,    ST_MACRO_19,    ST_MACRO_20,    ST_MACRO_21,    KC_NO,          
    KC_NO,          LCTL(KC_Q),     LCTL(KC_O),     LCTL(KC_H),     LCTL(KC_C),     LCTL(KC_V),                                     ST_MACRO_22,    ST_MACRO_23,    ST_MACRO_24,    ST_MACRO_25,    KC_NO,          KC_NO,          
                                                    LCTL(KC_J),     LCTL(KC_K),                                     KC_TRANSPARENT, KC_NO
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          QK_BOOT,        KC_MEDIA_NEXT_TRACK,KC_AUDIO_MUTE,  LALT(LGUI(LCTL(LSFT(KC_M)))),KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          MAC_DND,        KC_MEDIA_PREV_TRACK,KC_BRIGHTNESS_UP,KC_BRIGHTNESS_DOWN,KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          HSV_0_255_255,  HSV_169_255_255,RGB_VAI,        RGB_VAD,        RGB_TOG,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    HSV_74_255_255, RGB_MODE_FORWARD,                                KC_NO,          KC_NO
  ),
  [6] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          LALT(LSFT(KC_MINUS)),LALT(LSFT(KC_EQUAL)),KC_NO,          KC_NO,          
    KC_NO,          LGUI(KC_0),     LGUI(LSFT(KC_R)),LGUI(LSFT(KC_T)),LGUI(LSFT(KC_4)),KC_NO,                                          ST_MACRO_26,    LALT(LSFT(KC_7)),LALT(LSFT(KC_8)),LALT(LSFT(KC_9)),LALT(LSFT(KC_0)),KC_NO,          
    KC_NO,          LGUI(KC_EQUAL), LGUI(KC_3),     LGUI(KC_2),     LGUI(KC_1),     LGUI(KC_GRAVE),                                 LALT(LSFT(KC_H)),LCTL(KC_1),     LCTL(KC_2),     LCTL(KC_3),     LALT(KC_0),     KC_NO,          
    KC_NO,          LGUI(KC_MINUS), LGUI(KC_6),     LGUI(KC_5),     LGUI(KC_4),     LALT(LGUI(KC_M)),                                LALT(LSFT(KC_L)),LCTL(KC_4),     LCTL(KC_5),     LCTL(KC_6),     KC_NO,          KC_NO,          
                                                    LGUI(LSFT(KC_C)),LALT(LGUI(KC_BSPC)),                                LALT(KC_COMMA), LALT(KC_SLASH)
  ),
};
// clang-format on

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
  switch (keycode) {
  case PRE_REPEAT:
  case PRE_MAGIC:
  case KC_F23:
    return false;
  case MT(MOD_LSFT, KC_F23):
    if (record->tap.count) {
      return false; // to only ignore the tap keycode
    }
  };

  return true;
}

uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
  // basic and expected complex keycodes
  switch (keycode) {
  case KC_ENTER:
  case LGUI(LCTL(LSFT(KC_4))):
  case LGUI(LSFT(KC_5)):
    return KC_ESCAPE;

  case KC_ESCAPE:
  case KC_SEMICOLON:
  case KC_COMMA:
  case KC_O:    // so that alt-repeat gives enter with o or O in vim
  case S(KC_O): // so that alt-repeat gives enter with o or O in vim
  case KC_V:
    return KC_ENTER;

  case KC_RIGHT_PAREN:
    return M_ARROW_FUNC;

  case KC_LEFT_CURLY_BRACE:
    return M_CLOSE_BRACE;

  case KC_DOUBLE_QUOTE:
    return KC_PLUS;

  case S(KC_4):
    return M_ALT_DOLLAR;

  case KC_EXCLAIM:
  case KC_EQL:
    return M_EQEQ; // = -> ==, ! -> ==

  case KC_PLUS:
  case KC_MINUS:
  case KC_COLON:
  case KC_TILDE:
  case KC_ASTERISK:
    return KC_EQL; //
  }

  mods = mods | get_mods() | get_weak_mods() | get_oneshot_mods();

  // add modifiers for shortcut like keys like
  // C(KC_S), G(KC_C), S(KC_N), O(KC_N)
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX: // Unpack modifier + basic key.
    mods |= QK_MODS_GET_MODS(keycode);
    keycode = QK_MODS_GET_BASIC_KEYCODE(keycode);
    break;
  }

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
    case KC_R:
      return KC_DOUBLE_QUOTE;
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

    case KC_U:
      return C(KC_R);
    }
  }

  if (mods & MOD_MASK_CSA) {
    switch (keycode) {
    case KC_Z:
      return MEH(KC_G);
    case KC_S:
      return MEH(KC_W);
    case KC_W:
      return MEH(KC_S);
    }
  };

  return KC_TRNS;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_custom_shift_keys(keycode, record)) {
    return false;
  }

  const uint8_t mods = get_mods();

  switch (keycode) {
  case MT(MOD_LSFT, KC_F23):
    if (record->tap.count) {
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
      SEND_STRING_DELAY(/*{*/ "};" SS_TAP(X_ESC) SS_TAP(X_H) SS_TAP(X_I)
                            SS_TAP(X_ENTER) SS_TAP(X_ESC) SS_LSFT(SS_TAP(X_O)),
                        TAP_CODE_DELAY);
    }
    break;
  case M_ALT_DOLLAR:
    if (record->event.pressed) {
      SEND_STRING_DELAY(/*$*/ "{}" SS_TAP(X_ESC) SS_TAP(X_I), TAP_CODE_DELAY);
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
  case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_0));
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
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_LALT(SS_TAP(X_UP)));
    }
    break;
  case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100)
                      SS_LALT(SS_TAP(X_DOWN)));
    }
    break;
  case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_S));
    }
    break;
  case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_5));
    }
    break;
  case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_6));
    }
    break;
  case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_7));
    }
    break;
  case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_8));
    }
    break;
  case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_9));
    }
    break;
  case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100)
                      SS_LALT(SS_TAP(X_LEFT)));
    }
    break;
  case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_C));
    }
    break;
  case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_L));
    }
    break;
  case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100)
                      SS_LALT(SS_TAP(X_RIGHT)));
    }
    break;
  case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_D));
    }
    break;
  case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100)
                      SS_LSFT(SS_TAP(X_QUOTE)));
    }
    break;
  case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_LSFT(SS_TAP(X_5)));
    }
    break;
  case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_O));
    }
    break;
  case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_LSFT(SS_TAP(X_L)));
    }
    break;
  case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_LBRC));
    }
    break;
  case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_QUOTE));
    }
    break;
  case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_COMMA));
    }
    break;
  case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100)
                      SS_LSFT(SS_TAP(X_SLASH)));
    }
    break;
  case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_SCLN))) SS_DELAY(100) SS_TAP(X_F));
    }
    break;
  case MAC_DND:
    HSS(0x9B);

  case DUAL_FUNC_0:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(LGUI(LCTL(LSFT(KC_4))));
        set_last_keycode(KC_4);
        set_last_mods(get_mods());
      } else {
        unregister_code16(LGUI(LCTL(LSFT(KC_4))));
      }
    } else {
      if (record->event.pressed) {
        register_code16(LGUI(LSFT(KC_5)));
        set_last_keycode(KC_5);
        set_last_mods(get_mods());
      } else {
        unregister_code16(LGUI(LSFT(KC_5)));
      }
    }
    return false;
  case DUAL_FUNC_1:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(KC_AUDIO_VOL_DOWN);
        set_last_keycode(KC_AUDIO_VOL_DOWN);
      } else {
        unregister_code16(KC_AUDIO_VOL_DOWN);
      }
    } else {
      if (record->event.pressed) {
        register_code16(KC_AUDIO_VOL_UP);
        set_last_keycode(KC_AUDIO_VOL_UP);
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
        layer_on(5);
      } else {
        layer_off(5);
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
      rgblight_sethsv(0, 255, 255);
    }
    return false;
  case HSV_169_255_255:
    if (record->event.pressed) {
      rgblight_mode(1);
      rgblight_sethsv(169, 255, 255);
    }
    return false;
  case HSV_74_255_255:
    if (record->event.pressed) {
      rgblight_mode(1);
      rgblight_sethsv(74, 255, 255);
    }
    return false;
  }
  return true;
}
