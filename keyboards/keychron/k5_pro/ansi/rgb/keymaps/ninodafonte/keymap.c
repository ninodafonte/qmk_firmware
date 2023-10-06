/* Copyright 2023 @ Keychron (https://www.keychron.com)
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// clang-format off
enum layers{
 MAC_BASE,
 MAC_FN,
 WIN_BASE,
 WIN_FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[MAC_BASE] = LAYOUT_ansi_108(
   KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,  LSG(KC_3),  LCAG(KC_F20),  HYPR(KC_F11), TO(0),  OSL(1),   OSL(2),  OSL(3),
   KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC, KC_INS,   KC_HOME,  KC_PGUP, KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
   KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS, KC_DEL,   KC_END,   KC_PGDN, KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
   KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,                               KC_P4,   KC_P5,   KC_P6,
   KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,           KC_UP,             KC_P1,   KC_P2,   KC_P3,   KC_PENT,
   KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD, KC_ROPTN,MO(MAC_FN),KC_RCTL, KC_LEFT,  KC_DOWN,  KC_RGHT, KC_P0,            KC_PDOT),

[MAC_FN] = LAYOUT_ansi_108(
   _______,            KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,       KC_MPLY,  KC_MNXT,       KC_MUTE,  KC_VOLD,  KC_VOLU, _______,  _______,  RGB_TOG, _______, _______, _______, _______,
   _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  _______,       _______,  _______,       _______,  _______,  _______, RGB_MOD,  RGB_VAI,  RGB_HUI, RGB_SAI, RGB_SPI, _______, _______,
   RGB_TOG,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  HYPR(KC_F19),  _______,  HYPR(KC_F20),  _______,  _______,  _______, RGB_RMOD, RGB_VAD,  RGB_HUD, RGB_SAD, RGB_SPD, _______, _______,
   _______,  _______,  HYPR(KC_F15),  _______,  HYPR(KC_F17),  _______,  _______,  HYPR(KC_F16),  HYPR(KC_F12), HYPR(KC_F13),  _______,       _______,            _______,                              _______, _______, _______,
   _______,            _______,  _______,  HYPR(KC_F18),  HYPR(KC_F14),  _______,  _______,  _______,       _______,  _______,       _______,            _______,           _______,           _______, _______, _______, _______,
   _______,  _______,  _______,                                _______,                                          _______,  _______,  _______,  _______, _______,  _______,  _______, _______,         _______),

[WIN_BASE] = LAYOUT_ansi_108(
   KC_ESC,             _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,   _______,   _______,  _______,  _______, _______, _______, _______, _______, _______,
   _______,   _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,  _______,   _______, _______,   _______,  _______, _______,  _______, _______, _______,
   _______,   _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,  _______,  _______, _______,   _______,   _______, LCAG(KC_LEFT),   LCAG(KC_RGHT),   LCAG(KC_UP),   KC_PPLS,
   _______,  _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,  _______,            _______,                                    LCAG(KC_Z),   LCAG(KC_X),   LCAG(KC_C),
   _______,            _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,  _______,   _______,            _______,           _______,                      KC_P1,   LCAG(KC_A),   LCAG(KC_S),   KC_PENT,
   _______,  _______,  _______,                                _______,                                 _______,  _______, _______,_______, _______,  _______,  _______, LCAG(KC_0),                                                      LCAG(KC_D)),

[WIN_FN] = LAYOUT_ansi_108(
   KC_ESC,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,  _______,  _______, _______, _______, _______, _______,
   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,  _______,  _______, _______, _______, _______, LCAG(KC_F19),
   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,  _______,  _______, _______, _______, _______, LCAG(KC_4),
   _______,  _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,                              _______, _______, _______,
   _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,           _______,           _______, _______, _______, LCAG(KC_5),
   _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______, _______,  _______,  _______, _______,          _______),
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    for (uint8_t i = led_min; i < led_max; i++) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case 3:
                rgb_matrix_set_color(i, RGB_GREEN);
                break;
            case 2:
                rgb_matrix_set_color(i, RGB_MAGENTA);
                break;
            case 1:
                rgb_matrix_set_color(i, RGB_RED);
                break;
            default:
                rgb_matrix_set_color(i, RGB_WHITE);
                break;
        }
    }

    return false;
}
