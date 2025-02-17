/*
Copyright 2022 Adam Mazzarella

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
    _L3,
    _L4
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_aria(
        KC_HOME,   KC_GESC,  KC_1,      KC_2,    KC_3,    KC_4,    KC_5,    KC_6,          KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS, KC_EQL,  KC_BSPC,
        KC_END,    KC_TAB,  KC_Q,       KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,      KC_P,     KC_LBRC, KC_RBRC, KC_BSLS,
        KC_PGUP,   LT(1,KC_CAPS), KC_A,  KC_S,    KC_D,    KC_F,    KC_G,            KC_H,    KC_J,    KC_K,    KC_L,       KC_SCLN, KC_QUOT, KC_ENT,
        KC_PGDN,   KC_LSFT, KC_Z,         KC_X,    KC_C,    KC_V,    KC_B,          MO(1), KC_N,   KC_M,    KC_COMM,    KC_DOT,  KC_SLSH, KC_RSFT,             KC_UP,
                   KC_LCTL, KC_LGUI,       KC_LALT,     KC_SPC,                           KC_SPC,     KC_RALT,            KC_RGUI,  KC_RCTL,     KC_LEFT,     KC_DOWN,     KC_RGHT),
    [_FN] = LAYOUT_aria(
        KC_MPLY,   KC_GRV,  KC_F1,     KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,         KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_DEL,
        KC_MNXT,   KC_TRNS, KC_TRNS,    KC_UP,   KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
        KC_VOLU,   KC_TRNS,     KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,
        KC_VOLD,   KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,             KC_TRNS,
                   KC_TRNS, KC_TRNS,       KC_TRNS,     KC_TRNS,                          KC_TRNS,    KC_TRNS,            KC_TRNS,  KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS),
    [_L3] = LAYOUT_aria(
        KC_TRNS,   KC_TRNS,  KC_TRNS,     KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,         KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS,    KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,   KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,             KC_TRNS,
                   KC_TRNS, KC_TRNS,       KC_TRNS,     KC_TRNS,                          KC_TRNS,    KC_TRNS,            KC_TRNS,  KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS),
    [_L4] = LAYOUT_aria(
        KC_TRNS,   KC_TRNS,  KC_TRNS,     KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,         KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS,    KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,   KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,             KC_TRNS,
                   KC_TRNS, KC_TRNS,       KC_TRNS,     KC_TRNS,                          KC_TRNS,    KC_TRNS,            KC_TRNS,  KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS),
};


#ifdef OLED_ENABLE
// oled_rotation_t oled_init_user(oled_rotation_t rotation) {
//     return OLED_ROTATION_90;
// }

bool oled_task_user(void) {
    oled_write_P(PSTR("Layer: "), false);
    
    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("Default\n"), false);
            break;
        case _FN:
            oled_write_P(PSTR("FN\n"), false);
            break;
        case _L3:
            oled_write_P(PSTR("L3\n"), false);
            break;
        case _L4:
            oled_write_P(PSTR("L4\n"), false);
            break;
    }
    
    // Aria label
    oled_write_P(PSTR("\n"), false);
    oled_write_P(PSTR("                 Aria"), false);
    
    return false;
}
#endif

// void keyboard_post_init_user(void) {
//     debug_enable=true;
//     // debug_matrix=true;
//     debug_keyboard=true;
// }
