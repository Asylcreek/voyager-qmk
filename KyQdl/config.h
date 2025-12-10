#define FLOW_TAP_TERM 100
#define CHORDAL_HOLD
#undef TAPPING_TERM
#define TAPPING_TERM 240
#define QUICK_TAP_TERM_PER_KEY

#define PERMISSIVE_HOLD

#define USB_SUSPEND_WAKEUP_DELAY 0
#define SERIAL_NUMBER "KyQdl/Jazen0"
#define LAYER_STATE_8BIT
#define COMBO_COUNT 2
#define HSS(report)                                                            \
  host_system_send(record->event.pressed ? report : 0);                        \
  return false
#define HCS(report)                                                            \
  host_consumer_send(record->event.pressed ? report : 0);                      \
  return false

#define TAPPING_TERM_PER_KEY
#define WHEEL_EXTENDED_SUPPORT
#define POINTING_DEVICE_HIRES_SCROLL_ENABLE
#define POINTING_DEVICE_HIRES_SCROLL_EXPONENT 1
#define POINTING_DEVICE_GESTURES_CURSOR_GLIDE_ENABLE
#define MOUSE_EXTENDED_REPORT
#define NAVIGATOR_TRACKBALL_CPI 18
#define NAVIGATOR_SCROLL_DIVIDER 50

#define NAVIGATOR_SCROLL_INVERT_X
#define NAVIGATOR_SCROLL_INVERT_Y
#define RGB_MATRIX_STARTUP_SPD 60

#undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#undef ENABLE_RGB_MATRIX_BAND_VAL
#undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
#undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#undef ENABLE_RGB_MATRIX_HUE_WAVE
#undef ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#undef ENABLE_RGB_MATRIX_PIXEL_FLOW
#undef ENABLE_RGB_MATRIX_PIXEL_RAIN
#undef ENABLE_RGB_MATRIX_TYPING_HEATMAP
#undef ENABLE_RGB_MATRIX_DIGITAL_RAIN
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#undef ENABLE_RGB_MATRIX_SPLASH
#undef ENABLE_RGB_MATRIX_MULTISPLASH
#undef ENABLE_RGB_MATRIX_SOLID_SPLASH
#undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#undef ENABLE_RGB_MATRIX_STARLIGHT
#undef ENABLE_RGB_MATRIX_STARLIGHT_DUAL_HUE
#undef ENABLE_RGB_MATRIX_STARLIGHT_DUAL_SAT
#undef ENABLE_RGB_MATRIX_RIVERFLOW

#define CAPS_WORD_IDLE_TIMEOUT 3500
#define CAPS_WORD_INVERT_ON_SHIFT

// SELECT WORD
#define SELECT_WORD_OS_MAC

// ZOOM CONTROLS
// Lower this value to make zooming more sensitive (default is 10)
// Recommended starting value is 20 for slower, more controlled zoom.
#define ZOOM_DIVIDER 20

// This is the minimum accumulated scroll movement (in absolute value)
// needed to trigger one zoom step. Set to 3 to require a bigger movement
// before a key is sent.
#define ZOOM_THRESHOLD 3

// Set a minimum delay between key presses (in milliseconds) to smooth out
// repeated zooming. 0 means no debounce. Try 20ms or higher.
#define ZOOM_DEBOUNCE_MS 50
