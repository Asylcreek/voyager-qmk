#include "features/custom_shift_keys.h"

// key overrides
const custom_shift_key_t custom_shift_keys[] = {
    {KC_QUOT, KC_UNDS}, // Shift ' is _
};

uint8_t NUM_CUSTOM_SHIFT_KEYS =
    sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);
