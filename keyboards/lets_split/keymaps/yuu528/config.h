/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

/* Use I2C or Serial, not both */
#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

/* USB Device options */
#define DESCRIPTION Yuu528's Let's Split, Manufactured in 2018

/* Hardware options */
#define FORCE_NKRO
#undef LOCKING_SUPPORT_ENABLE

/* Disabling functions */
//#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Auto Shift settings */
#define AUTO_SHIFT_TIMEOUT 150
#define NO_AUTO_SHIFT_SPECIAL

/* Undergrow settings */
#undef RGBLIGHT_NUM
#define RGBLIGHT_NUM 10
#define RGBLIGHT_HUE_STEP 5
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 10
#define RGBLIGHT_SLEEP

/* Mouse Keys settings */
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MAX_SPEED 3
#define MOUSEKEY_TIME_TO_MAX 15
#define MOUSEKEY_WHEEL_MAX_SPEED 4
#define MOUSEKEY_WHEEL_TIME_TO_MAX 15

/* Tap-Hold settings */
#define PERMISSIVE_HOLD
