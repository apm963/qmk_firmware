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

#include "quantum.h"

#define LAYOUT_all LAYOUT_aria

/*
#define LAYOUT_aria( \
	K020,   K000, K001, K002, K003, K004, K005, K006,       K010, K011, K012, K013, K014, K015,       K017, \
	K040,   K021,       K022, K023, K024, K025, K026,       K030, K031, K032, K033, K034, K035, K036, K037, \
	K060,   K041,       K042, K043, K044, K045, K046,       K050, K051, K052, K053, K054, K055,       K056, \
	K007,   K061,       K062, K063, K064, K065, K066,       K070, K071, K072, K073, K074, K075, K076, K077, \
	        K027, K047,             K057, K067,                   K081, K083,             K085, K086, K087  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007 }, \
	{ K010,  K011,  K012,  K013,  K014,  K015,  KC_NO, K017 }, \
	{ K020,  K021,  K022,  K023,  K024,  K025,  K026,  K027 }, \
	{ K030,  K031,  K032,  K033,  K034,  K035,  K036,  K037 }, \
	{ K040,  K041,  K042,  K043,  K044,  K045,  K046,  K047 }, \
	{ K050,  K051,  K052,  K053,  K054,  K055,  K056,  K057 }, \
	{ K060,  K061,  K062,  K063,  K064,  K065,  K066,  K067	}, \
	{ K070,  K071,  K072,  K073,  K074,  K075,  K076,  K077 }, \
	{ KC_NO, K081,  KC_NO, K083,  KC_NO, K085,  K086,  K087 }  \
}
*/

/*
#define LAYOUT_aria( \
	K20,   K00, K01,  K02, K03, K04, K05, K06,       K10, K11, K12, K13, K14, K15,      K17, \
	K40,   K21,       K22, K23, K24, K25, K26,       K30, K31, K32, K33, K34, K35, K36, K37, \
	K60,   K41,       K42, K43, K44, K45, K46,       K50, K51, K52, K53, K54, K55,      K56, \
	K07,   K61,       K62, K63, K64, K65, K66,       K70, K71, K72, K73, K74, K75, K76, K77, \
	       K27, K47,            K57, K67,                 K81, K83,           K85, K86, K87  \
) { \
	{ K00,   K01,  K02,   K03,  K04,   K05,  K06,   K07 }, \
	{ K10,   K11,  K12,   K13,  K14,   K15,  KC_NO, K17 }, \
	{ K20,   K21,  K22,   K23,  K24,   K25,  K26,   K27 }, \
	{ K30,   K31,  K32,   K33,  K34,   K35,  K36,   K37 }, \
	{ K40,   K41,  K42,   K43,  K44,   K45,  K46,   K47 }, \
	{ K50,   K51,  K52,   K53,  K54,   K55,  K56,   K57 }, \
	{ K60,   K61,  K62,   K63,  K64,   K65,  K66,   K67	}, \
	{ K70,   K71,  K72,   K73,  K74,   K75,  K76,   K77 }, \
	{ KC_NO, K81,  KC_NO, K83,  KC_NO, K85,  K86,   K87 }  \
}
*/

#define LAYOUT_aria( \
	L00,   L01, L02,   L03, L04, L05, L06, L07,       R00, R01, R02, R03,  R04, R05, R07, \
	L10,   L11, L12,    L13, L14, L15, L16,         R10, R11, R12, R13,   R14, R15, R16, R17, \
	L20,   L21, L22,     L23, L24, L25, L26,         R20, R21, R22, R23,    R24, R25, R27, \
	L30,   L31, L32,      L33, L34, L35, L36,      R30, R31, R32, R33,    R34, R35, R36,      R37, \
	       L41, L42,       L43,     L45,                R41,    R42,        R43, R44,    R45, R46, R47 \
) { \
	{ L00,   L01,   L02,   L03,   L04,   L05,   L06,   L07 }, \
	{ L10,   L11,   L12,   L13,   L14,   L15,   L16,   KC_NO }, \
	{ L20,   L21,   L22,   L23,   L24,   L25,   L26,   KC_NO }, \
	{ L30,   L31,   L32,   L33,   L34,   L35,   L36,   KC_NO }, \
	{ KC_NO, L41,   L42,   L43,   KC_NO, L45,   KC_NO, KC_NO }, \
	{ R00,   R01,   R02,   R03,   R04,   R05,   KC_NO, R07 }, \
	{ R10,   R11,   R12,   R13,   R14,   R15,   R16,   R17 }, \
	{ R20,   R21,   R22,   R23,   R24,   R25,   KC_NO, R27 }, \
	{ R30,   R31,   R32,   R33,   R34,   R35,   R36,   R37 }, \
	{ KC_NO, R41,   R42,   R43,   R44,   R45,   R46,   R47 } \
}
