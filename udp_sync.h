/*
 * Network playback synchronization
 * Copyright (C) 2009 Google Inc.
 *
 * This file is part of MPlayer.
 *
 * MPlayer is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * MPlayer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with MPlayer; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef MPLAYER_UDP_SYNC_H
#define MPLAYER_UDP_SYNC_H

#include "mp_core.h"

// config options for UDP sync
extern int udp_master;
extern int udp_slave;
extern int udp_master_port;
extern int udp_slave_port;
extern int udp_port;
extern int udp_port_range;
extern const char *udp_ip; // where the master sends datagrams
                           // (can be a broadcast address)
extern const char *udp_slave_ip; // where the slave reads datagrams
extern float udp_seek_threshold; // how far off before we seek

void send_udp(MPContext *mpctx, char *mesg);
int udp_slave_sync(MPContext *mpctx);

#define MSGTR_InvalidIP "Option -udp-ip: invalid IP address\n"

#endif /* MPLAYER_UDP_SYNC_H */
