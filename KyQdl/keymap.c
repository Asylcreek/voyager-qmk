#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

#define MAGIC QK_AREP
#define REPEAT QK_REP
#define PRE_REPEAT LT(3, KC_F23)
#define PRE_REPEAT2 LT(4, KC_F23)
#define PRE_MAGIC LT(5, KC_F24)

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
  TMUX_UP,
  TMUX_DOWN,
  MAC_DND,
  MAC_LOCK,
  DRAG_SCROLL,
  TOGGLE_SCROLL,
  NAVIGATOR_INC_CPI,
  NAVIGATOR_DEC_CPI,
  NAVIGATOR_TURBO,
  NAVIGATOR_AIM,
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
    KC_NO,          KC_B,           KC_L,           MEH_T(KC_D),    KC_W,           KC_Z,                                           KC_QUOTE,       KC_F,           MEH_T(KC_O),    KC_U,           KC_J,           KC_NO,          
    KC_NO,          ALL_T(KC_N),    MT(MOD_LALT, KC_R),MT(MOD_LGUI, KC_T),MT(MOD_LSFT, KC_S),KC_G,                                           KC_Y,           MT(MOD_LSFT, KC_H),MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_E),ALL_T(KC_I),    KC_NO,          
    KC_NO,          KC_Q,           KC_X,           KC_M,           MT(MOD_LCTL, KC_C),KC_V,                                           KC_K,           MT(MOD_LCTL, KC_P),KC_DOT,         KC_COMMA,       KC_SCLN,        KC_NO,          
                                                    LT(3, KC_F23),  LT(5, KC_BSPC),                                 LT(6, KC_ENTER),LT(2, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          LGUI(LSFT(KC_5)),LGUI(KC_V),     LGUI(KC_A),     LGUI(KC_C),     LGUI(LCTL(LSFT(KC_4))),                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          LGUI(KC_0),     LGUI(KC_MINUS), LGUI(KC_EQUAL), LGUI(KC_W),     LSFT(KC_MS_BTN1),                                KC_NO,          KC_NO,          NAVIGATOR_AIM,  NAVIGATOR_TURBO,KC_NO,          NAVIGATOR_DEC_CPI,
    KC_NO,          LCTL(KC_TAB),   KC_MS_BTN2,     DRAG_SCROLL,    KC_MS_BTN1,     LGUI(KC_MS_BTN1),                                KC_NO,          TO(0),          LALT(LGUI(LCTL(LSFT(KC_C)))),KC_P,           KC_NO,          NAVIGATOR_INC_CPI,
    KC_NO,          LGUI(KC_Q),     LGUI(KC_RIGHT), LALT(LGUI(LCTL(LSFT(KC_S)))),LGUI(KC_LEFT),  QK_LLCK,                                        TOGGLE_SCROLL,  KC_MS_BTN2,     KC_MS_BTN1,     DRAG_SCROLL,    KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_9,           KC_8,           KC_7,           KC_NO,                                          KC_NO,          KC_NO,          LCTL(KC_COMMA), KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          CW_TOGG,        MT(MOD_LALT, KC_3),MT(MOD_LGUI, KC_2),MT(MOD_LSFT, KC_1),KC_NO,                                          KC_NO,          MT(MOD_LSFT | MOD_LALT, KC_0),OSM(MOD_LGUI),  OSM(MOD_LALT),  KC_NO,          KC_NO,          
    KC_NO,          KC_DELETE,      KC_6,           KC_5,           MT(MOD_LCTL, KC_4),KC_NO,                                          KC_NO,          MT(MOD_LCTL, KC_TAB),KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_BSLS,        KC_LBRC,        KC_LABK,        KC_DLR,         KC_TILD,                                        KC_UNDS,        KC_GRAVE,       KC_RABK,        KC_RBRC,        KC_PERC,        KC_NO,          
    KC_NO,          KC_EXLM,        KC_LPRN,        KC_EQUAL,       KC_LCBR,        KC_PLUS,                                        KC_MINUS,       KC_RPRN,        KC_DQUO,        KC_RCBR,        KC_AT,          KC_NO,          
    KC_NO,          KC_HASH,        KC_PIPE,        KC_AMPR,        KC_COLN,        KC_ASTR,                                        KC_SLASH,       KC_QUES,        KC_DOT,         KC_COMMA,       KC_CIRC,        KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          MAGIC,         LT(4, KC_F23)
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_9,           KC_8,           KC_7,           KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_3,           KC_2,           KC_1,           KC_NO,                                          KC_NO,          KC_0,           KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_6,           KC_5,           KC_4,           KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          LGUI(KC_LEFT),  KC_UP,          LGUI(KC_RIGHT), KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          OSM(MOD_LALT),  OSM(MOD_LGUI),  OSM(MOD_LSFT),  KC_NO,                                          LALT(KC_LEFT),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       RALT(KC_RIGHT), KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          OSM(MOD_LCTL),  QK_LLCK,                                        SELLINE,        SELWBAK,        SELWORD,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 MAGIC,         REPEAT
  ),
  [6] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          ST_MACRO_0,     ST_MACRO_1,     KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          RGB_VAD,        RGB_VAI,        KC_NO,          KC_NO,          
    KC_NO,          ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,                                     LED_LEVEL,      LALT(LGUI(LCTL(LSFT(KC_M)))),KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,MAC_DND,        KC_NO,          
    KC_NO,          ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,                                    RGB_TOG,        RGB_MODE_FORWARD,HSV_0_255_255,  HSV_169_255_255,HSV_74_255_255, QK_BOOT,        
                                                    TMUX_DOWN,      TMUX_UP,                                        KC_TRANSPARENT, KC_NO
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT('*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*',
           'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
           'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
           'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
           '*', '*', '*', '*');
// clang-format on

// custom shift keys
const custom_shift_key_t custom_shift_keys[] = {
    {KC_QUOT, KC_UNDS}, // Shift ' is _
                        // {LT(3, KC_BSPC), KC_DEL}, // Shift + bspc is Del
    {KC_DOT, KC_ESC},   // Shift . is Esc
};

const uint16_t PROGMEM combo0[] = {MT(MOD_LSFT, KC_S), MT(MOD_LSFT, KC_H),
                                   COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ESCAPE),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case MT(MOD_LSFT, KC_S):
    return TAPPING_TERM - 65;
        case MT(MOD_LCTL, KC_C):
            return TAPPING_TERM -65;
  case LT(3, KC_F23):
    return TAPPING_TERM - 65;
  case LT(5, KC_BSPC):
    return TAPPING_TERM - 65;
  case MT(MOD_LSFT, KC_H):
    return TAPPING_TERM - 65;
  case MT(MOD_LCTL, KC_P):
    return TAPPING_TERM - 65;
  case LT(2, KC_SPACE):
    return TAPPING_TERM - 65;
  case LT(4, KC_F23):
    return TAPPING_TERM - 65;
  default:
    return TAPPING_TERM;
  }
}

bool is_flow_tap_key(uint16_t keycode) {
  // Disable Flow Tap on mod-tap keys.
  if (IS_QK_MOD_TAP(keycode)) {
    switch (QK_MOD_TAP_GET_MODS(keycode)) {
    case MOD_LSFT:
    case MOD_LCTL:
      return false;
    }
  }

  switch (get_tap_keycode(keycode)) {
  case KC_A ... KC_Z:
  case KC_DOT:
  case KC_COMM:
  case KC_SCLN:
  case KC_QUOTE:
    return true;
  }
  return false;
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
  case PRE_REPEAT2:
  case PRE_MAGIC:
  case MAGIC:
  case MT(MOD_LSFT, KC_F23):
  case DRAG_SCROLL:
  case NAVIGATOR_AIM:
  case NAVIGATOR_TURBO:
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

extern bool set_scrolling;
extern bool navigator_turbo;
extern bool navigator_aim;
void pointing_device_init_user(void) { set_auto_mouse_enable(true); }
bool is_mouse_record_kb(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case NAVIGATOR_INC_CPI ... NAVIGATOR_AIM:
  case DRAG_SCROLL:
  case TOGGLE_SCROLL:
  case LSFT(KC_MS_BTN1):
  case LGUI(KC_MS_BTN1):
    return true;
  }
  return is_mouse_record_user(keycode, record);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  const uint8_t mods = get_mods();

  switch (keycode) {
  case PRE_REPEAT:
  case PRE_REPEAT2:
    if (record->tap.count) {
      repeat_key_invoke(&record->event);
      return false;
    }
    break;
  case MT(MOD_LSFT, KC_F23):
    if (record->tap.count) {
      repeat_key_invoke(&record->event);
      return false;
    }
    break;
  case PRE_MAGIC:
    if (record->tap.count) {
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

  case QK_MODS ... QK_MODS_MAX:
    // Mouse keys with modifiers work inconsistently across operating
    // systems, this makes sure that modifiers are always applied to the
    // mouse key that was pressed.
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
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100)
                      SS_LSFT(SS_TAP(X_SLASH)));
    }
    break;
  case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_C));
    }
    break;
  case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_L));
    }
    break;
  case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_LSFT(SS_TAP(X_L)));
    }
    break;
  case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100)
                      SS_LSFT(SS_TAP(X_QUOTE)));
    }
    break;
  case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_S));
    }
    break;
  case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_D));
    }
    break;
  case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_QUOTE));
    }
    break;
  case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_COMMA));
    }
    break;
  case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_LSFT(SS_TAP(X_5)));
    }
    break;
  case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_O));
    }
    break;
  case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_LBRC));
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
  case NAVIGATOR_TURBO:
    if (record->event.pressed) {
      navigator_turbo = true;
    } else {
      navigator_turbo = false;
    }
    return false;
  case NAVIGATOR_AIM:
    if (record->event.pressed) {
      navigator_aim = true;
    } else {
      navigator_aim = false;
    }
    return false;
  case NAVIGATOR_INC_CPI:
    if (record->event.pressed) {
      pointing_device_set_cpi(1);
    }
    return false;
  case NAVIGATOR_DEC_CPI:
    if (record->event.pressed) {
      pointing_device_set_cpi(0);
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
