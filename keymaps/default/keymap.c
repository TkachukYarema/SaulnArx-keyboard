// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬        ┬───┬───┬───┬───┬───┬───┐
     * │ ~ │ 1 │ 2 │ 3 │ 4 │ 5 │        │ 6 │ 7 │ 8 │ 9 │ 0 │Bak│
     * ├───┼───┼───┼───┼───┼───┼        ┼───┼───┼───┼───┼───┼───┤
     * │tab│ Q │ W │ E │ R │ T │        │ Y │ U │ I │ O │ P │ \ │
     * ├───┼───┼───┼───┼───┼───┼        ┼───┼───┼───┼───┼───┼───┤
     * │cap│ A │ S │ D │ F │ G │        │ H │ J │ K │ L │ ; │ " │
     * ├───┼───┼───┼───┼───┼───┼        ┼───┼───┼───┼───┼───┼───┤
     * │sft│ Z │ X │ C │ V │ B │        │ N │ M │ < │ > │ / │ent│
     * ├───┼───┼───┼───┼───┼───┼        ┼───┼───┼───┼───┼───┼───┤
     * │Crl│WIN│ALT│FN │SPC│ { │        │ } │SPC│FN │ALT│ = │ - │
     * └───┴───┴───┴───┴───┴───┴        ┴───┴───┴───┴───┴───┴───┘
     */

     /*
     * ┌───┬───┬───┬───┬───┬──────┬        ┬───┬───┬───┬───┬───┬───┐
     * │ ~ │ F1│ F2│ F3│ F4│ F5   │        │ F6│ F7│ F8│ F9│F10│F12│
     * ├───┼───┼───┼───┼───┼──────┼        ┼───┼───┼───┼───┼───┼───┤
     * │tab│   │Lbt│MsU│Rbt│MWhlUp│        │prt│scr│pas│   │   │   │
     * ├───┼───┼───┼───┼───┼──────┼        ┼───┼───┼───┼───┼───┼───┤
     * │cap│   │MsL│   │MsR│MdlMBt│        │ins│Hom│PgU│   │/|\│   │
     * ├───┼───┼───┼───┼───┼──────┼        ┼───┼───┼───┼───┼───┼───┤
     * │sft│   │   │MSD│   │MWhlDw│        │Del│End│PgD│ <-│ \/│ ->│
     * ├───┼───┼───┼───┼───┼──────┼        ┼───┼───┼───┼───┼───┼───┤
     * │Crl│WIN│ALT│FN │SPC│      │        │   │SPC│FN │ALT│ = │ - │
     * └───┴───┴───┴───┴───┴──────┴        ┴───┴───┴───┴───┴───┴───┘
     */
    // Layer 0: base
    [0] = LAYOUT(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,       KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH, KC_ENT,
        KC_LCTL, KC_LGUI, KC_LALT, MO(1),   KC_SPC,  KC_LBRC,    KC_RBRC, KC_SPC,  MO(1),   KC_RALT, KC_EQL,  KC_MINS
    ),
    // Layer 1: FN (F-keys, mouse, navigation)
    [1] = LAYOUT(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        KC_TAB,  _______, MS_BTN1, MS_UP,   MS_BTN2, MS_WHLU,    KC_PSCR, KC_SCRL, KC_PAUS, _______, _______, _______,
        KC_CAPS, _______, MS_LEFT, _______, MS_RGHT, MS_BTN3,    KC_INS,  KC_HOME, KC_PGUP, _______, KC_UP,   _______,
        KC_LSFT, _______, _______, MS_DOWN, _______, MS_WHLD,    KC_DEL,  KC_END,  KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT,
        KC_LCTL, KC_LGUI, KC_LALT, _______, KC_SPC,  _______,    _______, KC_SPC,  _______, KC_RALT, KC_EQL,  KC_MINS
    )

};
