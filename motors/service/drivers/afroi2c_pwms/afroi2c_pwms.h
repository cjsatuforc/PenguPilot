/*___________________________________________________
 |  _____                       _____ _ _       _    |
 | |  __ \                     |  __ (_) |     | |   |
 | | |__) |__ _ __   __ _ _   _| |__) || | ___ | |_  |
 | |  ___/ _ \ '_ \ / _` | | | |  ___/ | |/ _ \| __| |
 | | |  |  __/ | | | (_| | |_| | |   | | | (_) | |_  |
 | |_|   \___|_| |_|\__, |\__,_|_|   |_|_|\___/ \__| |
 |                   __/ |                           |
 |  GNU/Linux based |___/  Multi-Rotor UAV Autopilot |
 |___________________________________________________|
  
 AfroI2C I2C-PWM Converter Implementation

 Copyright (C) 2014 Martin Turetschek, Integrated Communication Systems Group, TU Ilmenau
 Copyright (C) 2014 Kevin Ernst, Integrated Communication Systems Group, TU Ilmenau

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details. */


#ifndef __AFROI2C_PWMS_H__
#define __AFROI2C_PWMS_H__


#include <stdint.h>
#include <i2c/i2c.h>


int afroi2c_pwms_init(i2c_bus_t *bus, uint8_t *motor_map, size_t n_pwms);


int afroi2c_pwms_write(float *setpoints);


#endif /* __AFROI2C_PWMS_H__ */

