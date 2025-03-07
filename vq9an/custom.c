// clang-format off
// Handedness for Chordal Hold.
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT_voyager('*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*',
                   'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
                   'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
                   'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
                   '*', 'L', 'R', '*');
// clang-format on

bool get_chordal_hold(uint16_t tap_hold_keycode, keyrecord_t *tap_hold_record,
                      uint16_t other_keycode, keyrecord_t *other_record) {

  // Exceptionally allow some one-handed chords for hotkeys.
  switch (tap_hold_keycode) {
  case MT(MOD_LSFT, KC_BSPC):
    return true;

  case LT(1, KC_SPACE):
    return true;
  }

  // Otherwise defer to the opposite hands rule.
  return get_chordal_hold_default(tap_hold_record, other_record);
}

// key overrides
const key_override_t shift_quote =
    ko_make_basic(MOD_MASK_SHIFT, KC_QUOT, KC_UNDS);

const key_override_t shift_dot = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_BSPC);

const key_override_t shift_minus =
    ko_make_basic(MOD_MASK_SHIFT, KC_MINUS, S(KC_ENTER));

const key_override_t **key_overrides = (const key_override_t *[]){
    &shift_quote, //
    &shift_dot,   //
    &shift_minus, //
    NULL          //
};
