/*
usbrelay: Control USB HID connected electrical relay modules
Copyright (C) 2014  Darryl Bond

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/
/* relay.h */

#define ON 0xff
#define OFF 0xfd
#define CMD_SET_SERIAL 0xfa

int operate_relay(hid_device *handle,unsigned char relay, unsigned char state);
int set_serial(hid_device *handle,char *newserial);

struct  relay {
	char this_serial[10];
	unsigned char relay_num;
	unsigned char state;
	int found;
	char new_serial[10];
};
	
