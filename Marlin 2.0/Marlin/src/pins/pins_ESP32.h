/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Espressif ESP32 (Tensilica Xtensa LX6) pin assignments
 */

#ifndef ARDUINO_ARCH_ESP32
  "Oops! Select an ESP32 board in 'Tools > Board.'"
#endif

#define BOARD_NAME "Espressif ESP32"

//
// I2S (steppers & other output-only pins)
//
#define I2S_STEPPER_STREAM
#define I2S_WS              25
#define I2S_BCK             26
#define I2S_DATA            27

//
// Limit Switches
//
#define X_MIN_PIN           34
#define Y_MIN_PIN           35
#define Z_MIN_PIN           15

//
// Steppers
//
#define X_STEP_PIN         128
#define X_DIR_PIN          129
#define X_ENABLE_PIN       130
//#define X_CS_PIN           0

#define Y_STEP_PIN         131
#define Y_DIR_PIN          132
#define Y_ENABLE_PIN       133
//#define Y_CS_PIN          13

#define Z_STEP_PIN         134
#define Z_DIR_PIN          135
#define Z_ENABLE_PIN       136
//#define Z_CS_PIN           5 // SS_PIN

#define E0_STEP_PIN        137
#define E0_DIR_PIN         138
#define E0_ENABLE_PIN      139
//#define E0_CS_PIN         21

//
// Temperature Sensors
//
#define TEMP_0_PIN          36   // Analog Input
#define TEMP_BED_PIN        39   // Analog Input

//
// Heaters / Fans
//
#define HEATER_0_PIN         2
#define FAN_PIN             13
#define HEATER_BED_PIN       4

// SPI
#define SDSS                 5
