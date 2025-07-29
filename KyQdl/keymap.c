#include QMK_KEYBOARD_H
#include "custom.c"
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

#define MAGIC QK_AREP
#define REPEAT QK_REP
// PRE_REPEAT is just KC_F23, its layer functionality for SymNum is handled by
// STICKY_SYMNUM
#define PRE_REPEAT KC_F23
#define PRE_MAGIC KC_F24

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
  // Macros invoked through the Magic key.
  M_EQEQ,
  M_ARROW_FUNC,
  M_CLOSE_BRACE,
  M_ALT_DOLLAR,
  // Custom sticky layer keycodes for SymNum layer (Layer 1)
  STICKY_SYMNUM, // This key will activate Layer 1 and set the layer lock
                 // (replaces STICKY_NAV)
  STICKY_SPACE   // This key will activate Layer 1 and set the layer lock
};

#define DUAL_FUNC_0 LT(2, KC_6)
#define DUAL_FUNC_1 LT(9, KC_F3)

// --- START: Sticky Layer 1 (SymNum) Logic Variables ---
// Define the timeout period for the sticky layer
#define STICKY_SYMNUM_TIMEOUT 2000 // Milliseconds (2 seconds of inactivity)

// State variables for our sticky SymNum layer (Layer 1) logic
static uint8_t sticky_symnum_held_count = 0;
static uint32_t sticky_symnum_activity_timer = 0; // Tracks last activity

// --- END: Sticky Layer 1 (SymNum) Logic Variables ---

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    MAC_LOCK,        ST_MACRO_0,      LGUI(KC_V),      LGUI(KC_A),      LGUI(KC_C),      DUAL_FUNC_0,                             KC_AUDIO_MUTE,  DUAL_FUNC_1,   KC_TAB,          KC_MEDIA_PLAY_PAUSE,KC_DELETE,       MAC_DND,         
    KC_ESCAPE,       KC_B,            KC_L,            KC_D,            KC_W,            KC_Z,                                    KC_QUOTE,        KC_F,            KC_O,            KC_U,            KC_J,            KC_SCLN,         
    CW_TOGG,         MT(MOD_LSFT, KC_N),MT(MOD_LALT, KC_R),MT(MOD_LGUI, KC_T),MEH_T(KC_S),   ALL_T(KC_G),                                     ALL_T(KC_Y),    MEH_T(KC_H),    MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_E),MT(MOD_LSFT, KC_I),KC_COMMA,        
    KC_NO,           KC_Q,            KC_X,            LT(2, KC_M),     MT(MOD_LCTL, KC_C),KC_V,                                    KC_K,            MT(MOD_LCTL, KC_P),LT(4, KC_DOT),  MAGIC,           KC_SLASH,        MO(3),           
                                                                         STICKY_SYMNUM,      KC_BSPC,                                 KC_ENTER,        STICKY_SPACE
  ),
  [1] = LAYOUT_voyager( // SymNum layer
    KC_NO,           KC_NO,           KC_NO,           KC_SPACE,        KC_NO,           KC_NO,                                   KC_TILD,         KC_EXLM,         KC_AMPR,         KC_AT,           KC_PERC,         KC_HASH,         
    KC_PIPE,         KC_ASTR,         KC_9,            KC_8,            KC_7,            KC_PLUS,                                 KC_UNDS,         KC_LBRC,         KC_LPRN,         KC_LCBR,         KC_GRAVE,        KC_CIRC,         
    KC_BSLS,         KC_LABK,         KC_3,            KC_2,            KC_1,            KC_COLN,                                 KC_DQUO,         KC_RCBR,         KC_RBRC,         KC_RPRN,         KC_DLR,          KC_COMMA,        
    KC_NO,           KC_RABK,         KC_6,            KC_5,            KC_4,            KC_EQUAL,                                KC_QUES,         KC_0,            KC_DOT,          KC_MINUS,        KC_SLASH,        KC_NO,           
                                                                         KC_TRANSPARENT,  KC_BSPC,                                 KC_BSPC,         REPEAT
  ),
  [2] = LAYOUT_voyager(
    KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,                                   KC_NO,           KC_NO,           LGUI(KC_UP),     KC_NO,           KC_NO,           KC_NO,           
    KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,                                   KC_PAGE_UP,      LGUI(KC_LEFT),   KC_UP,           LGUI(KC_RIGHT),  KC_PGDN,         KC_NO,           
    KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,                                   LALT(KC_LEFT),   KC_LEFT,         KC_DOWN,         KC_RIGHT,        LALT(KC_RIGHT),  KC_NO,           
    KC_NO,           KC_LEFT_SHIFT,   KC_NO,           KC_NO,           KC_NO,           KC_NO,                                   KC_NO,           KC_NO,           LGUI(KC_DOWN),   KC_NO,           KC_NO,           KC_NO,           
                                                                         KC_NO,           KC_NO,                                   KC_NO,           KC_NO
  ),
  [3] = LAYOUT_voyager(
    KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,                                   KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           
    KC_NO,           QK_BOOT,         KC_NO,           KC_NO,           KC_NO,           KC_NO,                                   KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           
    KC_NO,           KC_MEDIA_NEXT_TRACK,KC_MEDIA_PREV_TRACK,KC_BRIGHTNESS_UP,KC_BRIGHTNESS_DOWN,LALT(LGUI(LCTL(LSFT(KC_M)))),                                     KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           
    KC_NO,           HSV_0_255_255,   HSV_169_255_255,RGB_VAI,           RGB_VAD,         RGB_TOG,                                 KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_TRANSPARENT,  
                                                                         HSV_74_255_255,  RGB_MODE_FORWARD,                                        KC_NO,           KC_NO
  ),
  [4] = LAYOUT_voyager(
    ST_MACRO_1,      ST_MACRO_2,      ST_MACRO_3,      ST_MACRO_4,      ST_MACRO_5,      ST_MACRO_6,                                KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           
    ST_MACRO_7,      ST_MACRO_8,      ST_MACRO_9,      ST_MACRO_10,    ST_MACRO_11,     ST_MACRO_12,                                 KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           
    ST_MACRO_13,     ST_MACRO_14,     ST_MACRO_15,     ST_MACRO_16,    ST_MACRO_17,     ST_MACRO_18,                                 KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           
    ST_MACRO_19,     ST_MACRO_20,     ST_MACRO_21,     ST_MACRO_22,    ST_MACRO_23,     ST_MACRO_24,                                 KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           
                                                                         ST_MACRO_25,     ST_MACRO_26,                                     KC_NO,           KC_NO
  ),
  [5] = LAYOUT_voyager(
    KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,                                   KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           
    KC_NO,           KC_NO,           KC_DLR,          KC_AMPR,         KC_AT,           KC_PERC,                                 KC_UNDS,         KC_BSLS,         KC_GRAVE,        KC_EXLM,         KC_TILD,         KC_NO,           
    KC_NO,           KC_CIRC,         KC_LBRC,         KC_LPRN,         KC_LCBR,         KC_LABK,                                 KC_EQUAL,        KC_COLN,         KC_DQUO,         KC_PLUS,         KC_ASTR,         KC_COMMA,        
    KC_NO,           KC_HASH,         KC_RBRC,         KC_RPRN,         KC_RCBR,         KC_RABK,                                 KC_PIPE,         KC_QUES,         KC_DOT,          KC_MINUS,        KC_SLASH,        KC_NO,           
                                                                         KC_TRANSPARENT,  KC_NO,                                   KC_BSPC,         LT(6, KC_F23)
  ),
  [6] = LAYOUT_voyager(
    KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,                                   KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           
    KC_NO,           KC_NO,           KC_9,            KC_8,            KC_7,            KC_PERC,                                 KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           
    KC_NO,           KC_NO,           KC_3,            KC_2,            KC_1,            KC_COLN,                                 KC_EQUAL,        KC_0,            KC_NO,           KC_PLUS,         KC_ASTR,         KC_COMMA,        
    KC_NO,           KC_NO,           KC_6,            KC_5,            KC_4,            KC_NO,                                   KC_NO,           KC_NO,           KC_DOT,          KC_MINUS,        KC_SLASH,        KC_NO,           
                                                                         KC_TRANSPARENT,  KC_TRANSPARENT,                                  KC_NO,           KC_TRANSPARENT
  ),
};
// clang-format on

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT('*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', 'L', 'L',
           'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'L', 'L', 'L', 'L',
           'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'L', 'L', 'L', 'L', 'L', 'L',
           'R', 'R', 'R', 'R', 'R', 'R', '*', '*', '*', '*');

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case MT(MOD_LSFT, KC_N):
    return TAPPING_TERM - 55;
  case STICKY_SYMNUM: // Use the new custom keycode here for its tapping term
    return TAPPING_TERM - 55;
  case MT(MOD_LSFT, KC_I):
    return TAPPING_TERM - 55;
  case STICKY_SPACE: // Use the new custom keycode here for its tapping term
    return TAPPING_TERM - 55;
  case LT(6, KC_F23):
    return TAPPING_TERM - 55;
  default:
    return TAPPING_TERM;
  }
}

bool is_flow_tap_key(uint16_t keycode) {
  switch (get_tap_keycode(keycode)) {
  case KC_A ... KC_H:
  case KC_J ... KC_M:
  case KC_O ... KC_Z:
    return true;
  }
  return false;
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
  case KC_LPRN:
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
  case MAGIC:
  case LT(6, KC_F23):
  case STICKY_SYMNUM: // Include new sticky keycodes here
  case STICKY_SPACE:
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
      return KC_EQL; // * -> *=
    case KC_QUOTE:
      return KC_PLUS; // " -> "+
    case KC_0:
      return M_ARROW_FUNC;
    case KC_LEFT_BRACKET:
      return M_CLOSE_BRACE;
    case KC_SEMICOLON:
    case KC_GRAVE:
    case KC_EQUAL:
      return KC_EQL; //
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
  case KC_O: // so that alt-repeat gives enter with o or O in vim
  case KC_V:
    return KC_ENTER;

  case KC_EQL:
    return M_EQEQ; // = -> ==

  case KC_MINUS:
    return KC_EQL; //
  }

  return KC_TRNS;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // --- Handle PRE_REPEAT (KC_F23) for its tap functionality first ---
  if (keycode == PRE_REPEAT) {
    if (record->event.pressed) {
      repeat_key_invoke(&record->event);
      return false;
    }
#ifdef CONSOLE_ENABLE
    xprintf("PRE_REPEAT (%04X) processed. Returning false.\n", keycode);
#endif
    return false; // Consume the keypress, don't let it fall through.
  }

  // --- Handle Custom Sticky SymNum Layer (Layer 1) Keys ---
  switch (keycode) {
  case STICKY_SYMNUM:
  case STICKY_SPACE:
    if (record->event.pressed) {
      sticky_symnum_held_count++;
      // On press, activate layer 1 and set the lock
      layer_on(1);
      layer_lock_set(1);                           // LOCK Layer 1
      sticky_symnum_activity_timer = timer_read(); // Reset timer on activation
#ifdef CONSOLE_ENABLE
      xprintf("Sticky SymNum key PRESSED (%04X). Held count: %u. Layer 1 ON "
              "and LOCKED. Timer RESET: %lu.\n",
              keycode, sticky_symnum_held_count, sticky_symnum_activity_timer);
#endif
    } else { // Key released
      sticky_symnum_held_count--;
#ifdef CONSOLE_ENABLE
      xprintf("Sticky SymNum key RELEASED (%04X). Held count: %u.\n", keycode,
              sticky_symnum_held_count);
#endif
      // If all sticky activation keys are released, update the timer.
      // The layer remains locked until matrix_scan_user unlocks it.
      if (sticky_symnum_held_count == 0) {
        sticky_symnum_activity_timer =
            timer_read(); // Last activity on release of the sticky key
#ifdef CONSOLE_ENABLE
        xprintf("Sticky SymNum: ALL sticky keys released. Setting activity "
                "timer: %lu.\n",
                sticky_symnum_activity_timer);
#endif
      }
    }
    return false; // Consume these custom keycodes
  }

  // --- Activity Tracker for Sticky Layer Timeout ---
  // If Layer 1 is currently active AND a key (any key) is pressed on it,
  // reset the inactivity timer.
  if (layer_state_is(1) && record->event.pressed) {
    // Exclude the sticky keys themselves from resetting this timer on press,
    // as their own logic already sets it upon layer activation.
    // This is for *other* keys pressed while Layer 1 is active.
    if (keycode != STICKY_SYMNUM && keycode != STICKY_SPACE) {
      sticky_symnum_activity_timer =
          timer_read(); // Reset timer due to activity
#ifdef CONSOLE_ENABLE
      xprintf("Sticky SymNum: Activity detected on Layer 1 (%04X). Timer "
              "RESET: %lu.\n",
              keycode, sticky_symnum_activity_timer);
#endif
    }
  }

  if (!process_custom_shift_keys(keycode, record)) {
    return false;
  }

  const uint8_t mods = get_mods();

  switch (keycode) {
  case PRE_MAGIC:
    if (record->event.pressed) {
      alt_repeat_key_invoke(&record->event); // Invoke alt key
    }
    return false; // Return false to ignore further processing of key
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
      SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_SCLN))) SS_DELAY(100) SS_TAP(X_F));
    }
    break;
  case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100)
                      SS_LSFT(SS_TAP(X_SLASH)));
    }
    break;
  case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_5));
    }
    break;
  case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_6));
    }
    break;
  case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_7));
    }
    break;
  case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_8));
    }
    break;
  case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_9));
    }
    break;
  case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100)
                      SS_LALT(SS_TAP(X_RIGHT)));
    }
    break;
  case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_0));
    }
    break;
  case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_1));
    }
    break;
  case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_2));
    }
    break;
  case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_3));
    }
    break;
  case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_4));
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
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_D));
    }
    break;
  case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_LSFT(SS_TAP(X_L)));
    }
    break;
  case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_LSFT(SS_TAP(X_5)));
    }
    break;
  case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100)
                      SS_LSFT(SS_TAP(X_QUOTE)));
    }
    break;
  case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_S));
    }
    break;
  case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_C));
    }
    break;
  case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_O));
    }
    break;
  case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_L));
    }
    break;
  case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_COMMA));
    }
    break;
  case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_QUOTE));
    }
    break;
  case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_LBRC));
    }
    break;
  case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100)
                      SS_LALT(SS_TAP(X_DOWN)));
    }
    break;
  case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_COMMA)) SS_DELAY(100) SS_LALT(SS_TAP(X_UP)));
    }
    break;
  case MAC_DND:
    HSS(0x9B);
  case MAC_LOCK:
    HCS(0x19E);

  case DUAL_FUNC_0:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(LGUI(LCTL(LSFT(KC_4))));
        set_last_keycode(KC_4);
        set_last_mods(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT) | MOD_BIT(KC_LGUI));
      } else {
        unregister_code16(LGUI(LCTL(LSFT(KC_4))));
      }
    } else {
      if (record->event.pressed) {
        register_code16(LGUI(LSFT(KC_5)));
        set_last_keycode(KC_5);
        set_last_mods(MOD_BIT(KC_LSFT) | MOD_BIT(KC_LGUI));
      } else {
        unregister_code16(LGUI(LSFT(KC_5))));
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

// QMK's matrix_scan_user function. This runs continuously.
void matrix_scan_user(void) {
  // If Layer 1 is currently active AND no sticky activation keys are held
  if (layer_state_is(1) && sticky_symnum_held_count == 0) {
    // If the activity timer has been started (is not 0) and the timeout period
    // has passed
    if (sticky_symnum_activity_timer > 0 &&
        timer_elapsed(sticky_symnum_activity_timer) > STICKY_SYMNUM_TIMEOUT) {
      layer_lock_clear();               // Clear the layer lock
      layer_off(1);                     // Deactivate layer 1
      sticky_symnum_activity_timer = 0; // Reset timer
#ifdef CONSOLE_ENABLE
      xprintf("Sticky SymNum: Timeout! Layer 1 UNLOCKED and DEACTIVATED. "
              "Current layer: %u\n",
              get_highest_layer(layer_state));
#endif
    }
  } else if (!layer_state_is(1)) { // If Layer 1 is NOT active (e.g., switched
                                   // away, or base layer)
    // Ensure our timer is reset if Layer 1 is not active.
    if (sticky_symnum_activity_timer != 0) {
#ifdef CONSOLE_ENABLE
      xprintf("Sticky SymNum: Layer 1 is OFF. Resetting activity timer.\n");
#endif
      sticky_symnum_activity_timer = 0;
      // Also ensure held count is 0 if layer is off.
      if (sticky_symnum_held_count != 0) {
#ifdef CONSOLE_ENABLE
        xprintf("Sticky SymNum: WARNING! Layer 1 OFF but held_count not 0. "
                "Resetting.\n");
#endif
        sticky_symnum_held_count = 0;
      }
    }
  }
  // No need to handle sticky_symnum_held_count > 0 in matrix_scan_user
  // explicitly. As long as a key is held, the timer shouldn't be checked for
  // timeout.
}

// Add this function if you don't have it, useful for debugging layer changes
uint32_t layer_state_set_user(uint32_t state) {
  uint8_t new_layer = get_highest_layer(state);
#ifdef CONSOLE_ENABLE
  xprintf("Layer changed to: %u\n", new_layer);
#endif
  return state;
}
