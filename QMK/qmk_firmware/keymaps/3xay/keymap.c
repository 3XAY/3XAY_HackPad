// Copyright 2023 Nico Stuhlmueller (@ThePurox)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     * ┌───┬───┬───┐
     * │ 0 │ 1 │ 2 │
     * ├───┼───┼───┤
     * │ 3 │ 4 │ 5 │
     * └───┴───┴───┘
     */
    [0] = LAYOUT( KC_X, KC_Y, KC_Z, // Each layout has a keymap for each keypress. These are in order. (This is the Blender keymap)
                  KC_LEFT_CTRL + KC_LEFT_ALT + KC_KP_0, KC_KP_DOT, KC_F12
                ),

    [1] = LAYOUT( KC_0, KC_1, KC_2, // This is the Davinci keymap
                  KC_3, KC_4, KC_5
                )};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = { //This is how you define encoder mapping
    [0] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)}, // This is also per layout, but this is for counter-clockwise vs. clockwise rotation
    [1] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)}
}
#endif