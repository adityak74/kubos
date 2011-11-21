<<<<<<< HEAD
/*
Cubesat Space Protocol - A small network-layer protocol designed for Cubesats
Copyright (C) 2011 GomSpace ApS (http://www.gomspace.com)
Copyright (C) 2011 AAUSAT3 Project (http://aausat3.space.aau.dk)

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _CSP_IF_I2C_H_
#define _CSP_IF_I2C_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#include <csp/csp.h>
#include <csp/csp_interface.h>

extern csp_iface_t csp_if_i2c;

/**
 * Capture I2C RX events for CSP
 * @param opt_addr local i2c address
 * @param handle which i2c device to use
 * @return csp_error.h code
 */
int csp_i2c_init(uint8_t opt_addr, int handle);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _CSP_IF_I2C_H_ */
