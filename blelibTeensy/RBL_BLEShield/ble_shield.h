/*

Copyright (c) 2012, 2013 RedBearLab

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/

#ifndef  _BLE_SHIELD_H
#define _BLE_SHIELD_H

#ifdef _TEENSY3_ 
#include "belservices.h"
#else
#include <services.h>
#endif //_TEENSY3_
#include "hal_aci_tl.h"

void ble_begin(E_BLE_INIT_MODE eInitMode);
void ble_write(unsigned char data);
void ble_write_bytes(unsigned char *data, unsigned char len);
void ble_do_events();
int ble_read();
unsigned char ble_available();
unsigned char ble_connected(void);

//0xFF interrupt_number implies we are not using interrupt
void ble_set_pins(uint8_t reqn, uint8_t rdyn,uint8_t interrupt_number =0xFF, int interrupt_mode = LOW);

void ble_setAdvtTimeout(uint16_t timeout_inseconds);

#endif//_BLE_SHIELD_H

