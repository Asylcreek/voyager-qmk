#include "features/custom_shift_keys.h"

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
const custom_shift_key_t custom_shift_keys[] = {
    {KC_QUOT, KC_UNDS},       // Shift ' is _
    {LT(2, KC_DOT), KC_BSPC}, // Shift . is backspace
    {KC_DOT, KC_BSPC},        // Shift . is backspace
    {KC_MINS, S(KC_ENTER)},   // Shift - is Shift+Enter
};

uint8_t NUM_CUSTOM_SHIFT_KEYS =
    sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);
