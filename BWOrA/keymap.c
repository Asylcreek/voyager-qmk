#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

#define MAGIC QK_AREP
#define REPEAT QK_REP
#define PRE_REPEAT LT(2, KC_F23)
#define PRE_MAGIC MT(MOD_LALT, KC_F24)

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_169_255_255,
  HSV_0_255_255,
  HSV_74_255_255,
  TMUX_UP,
  TMUX_DOWN,
  MAC_DND,
  MAC_LOCK,
  // Macros invoked through the Magic key.
  M_EQEQ,
  M_ARROW_FUNC,
  M_CLOSE_BRACE,
  M_ALT_DOLLAR,
  M_SPREAD_PAIRS
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    MAC_LOCK,       LGUI(LSFT(KC_5)),LGUI(KC_V),     LGUI(KC_A),     LGUI(KC_C),     LGUI(LCTL(LSFT(KC_4))),                                KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_AUDIO_MUTE,  
    KC_NO,          KC_B,           KC_L,           MT(MOD_LGUI, KC_D),MT(MOD_LALT, KC_W),KC_Z,                                           KC_QUOTE,       MT(MOD_LALT, KC_F),MT(MOD_LGUI, KC_O),KC_U,           KC_J,           KC_NO,          
    KC_NO,          KC_N,           LT(3, KC_R),    LT(4, KC_T),    MT(MOD_LSFT, KC_S),MEH_T(KC_G),                                    MEH_T(KC_Y),    MT(MOD_LSFT, KC_H),LT(1, KC_A),    KC_E,           KC_I,           KC_NO,          
    KC_NO,          KC_Q,           KC_X,           ALL_T(KC_M),    MT(MOD_LCTL, KC_C),KC_V,                                           KC_K,           MT(MOD_LCTL, KC_P),KC_DOT,         KC_COMMA,       KC_SCLN,        KC_NO,          
                                                    LT(2, KC_F23),  KC_BSPC,                                        MAGIC,         KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_ASTR,        KC_9,           KC_8,           KC_7,           KC_SLASH,                                       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_EQUAL,       KC_3,           KC_2,           KC_1,           KC_PLUS,                                        LCTL(KC_COMMA), MT(MOD_LSFT | MOD_LALT, KC_DOT),KC_TRANSPARENT, MT(MOD_LALT, KC_COMMA),KC_NO,          KC_NO,          
    KC_NO,          KC_UNDS,        KC_6,           KC_5,           KC_4,           KC_MINUS,                                       KC_NO,          KC_LEFT_CTRL,   KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, MT(MOD_LGUI, KC_BSPC),                                KC_TAB,         KC_0
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_BSLS,        KC_LBRC,        KC_PIPE,        KC_AMPR,        KC_COMMA,                                       KC_UNDS,        KC_PLUS,        KC_AT,          KC_RBRC,        KC_CIRC,        KC_NO,          
    KC_NO,          KC_EXLM,        KC_LPRN,        KC_COLN,        KC_LCBR,        KC_RABK,                                        KC_LABK,        KC_RCBR,        KC_DQUO,        KC_RPRN,        KC_EQUAL,       KC_NO,          
    KC_NO,          KC_TILD,        KC_HASH,        KC_PERC,        KC_DLR,         KC_ASTR,                                        KC_GRAVE,       KC_QUES,        KC_DOT,         KC_MINUS,       KC_SLASH,       KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          LCTL(KC_COMMA), REPEAT
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LGUI(KC_UP),    LGUI(KC_LEFT),  KC_UP,          LGUI(KC_RIGHT), LGUI(KC_DOWN),  KC_NO,          
    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          MT(MOD_LSFT, KC_ENTER),KC_NO,                                          LALT(KC_LEFT),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       LALT(KC_RIGHT), KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          SELLINE,        SELWBAK,        SELWORD,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          TMUX_UP,     TMUX_DOWN
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          MAC_DND,        LALT(LGUI(LCTL(LSFT(KC_M)))),KC_TAB,         KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_NO,          
    KC_NO,          KC_NO,          OSM(MOD_LALT),  KC_TRANSPARENT, OSM(MOD_LSFT),  KC_NO,                                          CW_TOGG,        KC_ENTER,       KC_ESCAPE,      KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          OSM(MOD_LCTL),  KC_NO,                                          RGB_TOG,        RGB_VAD,        RGB_VAI,        HSV_169_255_255,HSV_0_255_255,  QK_BOOT,        
                                                    OSM(MOD_LGUI),  LALT(LSFT(KC_SCLN)),                                RGB_MODE_FORWARD,HSV_74_255_255
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);
// clang-format on

// custom shift keys
const custom_shift_key_t custom_shift_keys[] = {
    {KC_QUOT, KC_UNDS}, // Shift ' is _
    {KC_BSPC, KC_DEL},  // Shift + bspc is Del
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case LT(4, KC_T):
    return TAPPING_TERM - 45;
  case MT(MOD_LSFT, KC_S):
    return TAPPING_TERM - 45;
  case LT(2, KC_F23):
    return TAPPING_TERM - 45;
  case MT(MOD_LSFT, KC_H):
    return TAPPING_TERM - 45;
  case LT(1, KC_A):
    return TAPPING_TERM - 45;
  default:
    return TAPPING_TERM;
  }
}

bool caps_word_press_user(uint16_t keycode) {
  switch (keycode) {
  case KC_A ... KC_Z:
  case KC_QUOTE:
    add_weak_mods(MOD_BIT(KC_LSFT));
    return true;

  case KC_1 ... KC_0:
  case KC_BSPC:
  case KC_DEL:
  case KC_LPRN:
    return true;

  default:
    return false;
  }
}

bool remember_last_key_user(uint16_t keycode, keyrecord_t *record,
                            uint8_t *remembered_mods) {
  switch (keycode) {
  case PRE_REPEAT:
  case PRE_MAGIC:
  case MAGIC:
    return false;
  };
  return true;
}

uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
  mods = mods | get_mods() | get_weak_mods() | get_oneshot_mods();
  keycode = get_tap_keycode(keycode);

  // add modifiers for shortcut like keys like
  // C(KC_S), G(KC_C), S(KC_N), O(KC_N)
  if (IS_QK_MODS(keycode)) {
    mods |= QK_MODS_GET_MODS(keycode);
    keycode = QK_MODS_GET_BASIC_KEYCODE(keycode);
  };

  if (mods == MOD_BIT(KC_LCTL)) {
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

  if (mods == MOD_BIT(KC_LSFT)) {
    switch (keycode) {
    case KC_O:
      return KC_ENTER;
    case KC_1:
      return M_EQEQ; // ! -> ==
    case KC_4:
      return M_ALT_DOLLAR; // $ -> {};
    case KC_8:
      return KC_EQL;
    case KC_QUOTE:
      return KC_PLUS;
    case KC_0:
      return M_ARROW_FUNC;
    case KC_LEFT_BRACKET:
      return M_CLOSE_BRACE;
    case KC_SEMICOLON:
    case KC_GRAVE:
    case KC_EQUAL:
      return KC_EQL;
    case KC_SLASH:
      return KC_ENTER;
    };
  };

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

  if (mods == MOD_BIT(KC_LALT)) {
    switch (keycode) {
    case KC_BSPC:
      return G(KC_BSPC);
    case KC_SLASH:
      return A(KC_COMMA);
    };
  }

  if (mods == MOD_BIT(KC_LGUI)) {
    switch (keycode) {
    case KC_EQL:
      return G(KC_MINUS);
    case KC_MINUS:
      return G(KC_EQL);
    };
  }

  // if MEH
  if (mods == (MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT) | MOD_BIT(KC_LALT))) {
    switch (keycode) {
    case KC_Z:
      return MEH(KC_G);
    case KC_S:
      return MEH(KC_W);
    case KC_W:
      return MEH(KC_S);
    }
  };

  // if C+S+G
  if (mods == (MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT) | MOD_BIT(KC_LGUI))) {
    switch (keycode) {
    case KC_4:
      return KC_ESCAPE;
    }
  }

  // if S+G
  if (mods == (MOD_BIT(KC_LSFT) | MOD_BIT(KC_LGUI))) {
    switch (keycode) {
    case KC_5:
      return KC_ESCAPE;
    }
  }

  // if S+O
  if (mods == (MOD_BIT(KC_LSFT) | MOD_BIT(KC_LALT))) {
    switch (keycode) {
    case KC_EQL:
      return A(S(KC_MINUS));
    case KC_MINUS:
      return A(S(KC_EQL));
    case KC_L:
      return A(S(KC_H));
    case KC_H:
      return A(S(KC_L));
    case KC_K:
      return A(S(KC_J));
    case KC_J:
      return A(S(KC_K));
    case KC_7:
      return MEH(KC_G);
    case KC_8:
      return A(KC_8);
    case KC_9:
      return A(KC_9);
    case KC_U:
      return A(KC_U);
    };
  };

  // add this last so that any combinations that have modifiers
  // would trigger first
  switch (keycode) {
  case KC_ENTER:
    return KC_ESCAPE;

  case KC_ESCAPE:
  case KC_SEMICOLON:
  case KC_COMMA:
  case KC_O:
  case KC_V:
  case KC_DOT:
    return KC_ENTER;

  case KC_EQL:
    return M_EQEQ; // = -> ==

  case KC_MINUS:
    return KC_EQL;

  case SELWBAK:
    return SELWORD;
  case SELWORD:
    return SELWBAK;

  case TMUX_UP:
    return TMUX_DOWN;
  case TMUX_DOWN:
    return TMUX_UP;

  case KC_A:
  case KC_I:
    return M_SPREAD_PAIRS;

  case KC_SPACE:
    return KC_BACKSPACE;
  }

  return KC_TRNS;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  const uint8_t mods = get_mods();

  switch (keycode) {
  case PRE_REPEAT:
    if (record->tap.count) {
      repeat_key_invoke(&record->event);
      return false;
    }
    break;
  case PRE_MAGIC:
    if (record->tap.count && record->event.pressed) {
      alt_repeat_key_invoke(&record->event);
      return false;
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
  case M_SPREAD_PAIRS:
    if (record->event.pressed) {
      SEND_STRING_DELAY(SS_TAP(X_ENTER) SS_TAP(X_ESC) SS_LSFT(SS_TAP(X_O)),
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
  case LSFT_T(KC_H):
    if (record->tap.count && record->event.pressed) {
      if (get_repeat_key_count() > 1 && (get_last_mods() & MOD_MASK_CTRL)) {
        tap_code16(C(KC_W));
        return false;
      };
    }
    break;
  case KC_BACKSPACE:
    if (record->event.pressed) {
      if (get_repeat_key_count() > 1) {
        tap_code16(C(KC_W));
        return false;
      };
    }
    break;

  case TMUX_UP:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_LALT(SS_TAP(X_UP)));
    }
    break;
  case TMUX_DOWN:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100)
                      SS_LALT(SS_TAP(X_DOWN)));
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
      rgblight_sethsv(169, 255, 255);
    }
    return false;
  case HSV_0_255_255:
    if (record->event.pressed) {
      rgblight_mode(1);
      rgblight_sethsv(0, 255, 255);
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
