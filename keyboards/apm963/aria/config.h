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

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4D78
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    Mazzy
#define PRODUCT         Aria

/*Bootmagic boot button, set to topmost, leftmost key */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 1
#define BOOTMAGIC_LITE_ROW_RIGHT 5
#define BOOTMAGIC_LITE_COLUMN_RIGHT 7

/* encoder */
/* #define NUMBER_OF_ENCODERS 1 */
/*
// #define ENCODERS_PAD_A { D3 }
// #define ENCODERS_PAD_B { D2 }
#define ENCODER_RESOLUTION 2
#define ENCODERS_PAD_A { }
#define ENCODERS_PAD_B { }
// #define ENCODER_RESOLUTION { }
#define ENCODERS_PAD_A_RIGHT { F4 }
#define ENCODERS_PAD_B_RIGHT { F7 }
#define ENCODER_RESOLUTION_RIGHT { 1 }
*/

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

/* key matrix pins TODO: need to map the rows properly for the split */
// #define MATRIX_ROW_PINS { B4, B5, B6, B2, B3 }
// #define MATRIX_COL_PINS { D3, D2, D1, D0, D4, C6, D7, E6 }
// #define MATRIX_ROW_PINS { B6, B2, B3, B1, F7 }
// #define MATRIX_COL_PINS { D3, D2, D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { B5, B4, E6, D7, C6 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2, B6 }
#define SPLIT_HAND_PIN D4
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5


// #define LED_NUM_LOCK_PIN  D4
#define LED_CAPS_LOCK_PIN B0 // Can use onboard B0 and D5. Originally set to D6
#define LED_PIN_ON_STATE 0 // Pin B0 needed this

/*
#define RGB_DI_PIN F7
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLED_NUM 14
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
*/

#define USE_I2C
#define SPLIT_LED_STATE_ENABLE