/*
  xdrv_52_3_berry_tasmota_global.ino - Berry scripting language, mapping to TasmotaGlobal

  Copyright (C) 2021 Stephan Hadinger, Berry language by Guan Wenliang https://github.com/Skiars/berry

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
/********************************************************************
 * Tasmota LVGL ctypes mapping
 *******************************************************************/

#ifdef USE_BERRY

#include <berry.h>
#include "be_ctypes.h"

/********************************************************************
 * Generated code, don't edit
 *******************************************************************/

extern "C" {

  extern const be_ctypes_structure_t be_tasmota_global_struct = {
    sizeof(TasmotaGlobal),  /* size in bytes */
    4,  /* number of elements */
    nullptr,
    (const be_ctypes_structure_item_t[4]) {
      // Warning: fields below need to be in alphabetical order
      { "devices_present", offsetof(TasmotaGlobal_t, devices_present), 0, 0, ctypes_u8, 0 },
      { "fast_loop_enabled", offsetof(TasmotaGlobal_t, berry_fast_loop_enabled), 0, 0, ctypes_u8, 0 },
      { "restart_flag", offsetof(TasmotaGlobal_t, restart_flag), 0, 0, ctypes_u8, 0 },
      { "sleep", offsetof(TasmotaGlobal_t, sleep), 0, 0, ctypes_u8, 0 },
  }};

  extern const be_ctypes_structure_t be_tasmota_settings_struct = {
    sizeof(TSettings),  /* size in bytes */
    2,  /* number of elements */
    nullptr,
    (const be_ctypes_structure_item_t[2]) {
      // Warning: fields below need to be in alphabetical order
      { "bootcount", offsetof(TSettings, bootcount), 0, 0, ctypes_u16, 0 },
      { "sleep", offsetof(TSettings, sleep), 0, 0, ctypes_u8, 0 },
  }};

}

#endif // USE_BERRY
