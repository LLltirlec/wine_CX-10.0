/*
 * Unixlib header file for winecoreaudio driver.
 *
 * Copyright 2021 Huw Davies
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#include "../mmdevapi/unixlib.h"

NTSTATUS unix_midi_init( void * );
NTSTATUS unix_midi_release( void * );
NTSTATUS unix_midi_out_message( void * );
NTSTATUS unix_midi_in_message( void * );
NTSTATUS unix_midi_notify_wait( void * );

#ifdef _WIN64
NTSTATUS unix_wow64_midi_init(void *args);
NTSTATUS unix_wow64_midi_out_message(void *args);
NTSTATUS unix_wow64_midi_in_message(void *args);
NTSTATUS unix_wow64_midi_notify_wait(void *args);
#endif

#define UNIX_CALL( func, params ) WINE_UNIX_CALL( func, params )
