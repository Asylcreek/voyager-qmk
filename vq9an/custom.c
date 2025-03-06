// clang-format off
// Handedness for Chordal Hold.
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT_voyager('*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*',
                   'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
                   'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
                   'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
                   '*', 'L', 'R', '*');
// clang-format on

// key overrides
const key_override_t shift_quote =
    ko_make_basic(MOD_MASK_SHIFT, KC_QUOT, KC_UNDS);

const key_override_t shift_dot = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_BSPC);

const key_override_t shift_esc =
    ko_make_basic(MOD_MASK_SHIFT, KC_ESC, KC_ENTER);

const key_override_t **key_overrides = (const key_override_t *[]){
    &shift_quote, //
    &shift_dot,   //
    &shift_esc,   //
    NULL          //
};
