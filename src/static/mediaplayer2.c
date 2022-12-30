/* SPDX-License-Identifier: GPL-3.0-or-later
 *
 * static/mediaplayer2.c  This file is part of LibWoofer
 * Copyright (C) 2021, 2022  Quico Augustijn
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed "as is" in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  If your
 * computer no longer boots, divides by 0 or explodes, you are the only
 * one responsible.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * version 3 along with this library.  If not, see
 * <https://www.gnu.org/licenses/gpl-3.0.html>.
 */

/* INCLUDES BEGIN */

#include <glib.h>
#include <gio/gio.h>

#include <woofer/static/mediaplayer2.h>

/* INCLUDES END */

/* DESCRIPTION BEGIN */

/*
 * This source file is auto generated by a script and only contains functions
 * for retrieving a GDBusInterfaceInfo pointer.
 *
 * https://github.com/quicoa/gdbus_introspection_to_code
 */

/* DESCRIPTION END */

/* INTROSPECTION DATA BEGIN */

// Methods for org_mpris_mediaplayer2

// Method Raise
static GDBusMethodInfo mp2_org_mpris_mediaplayer2_method_raise =
{
	-1,
	"Raise",
	NULL,
	NULL,
	NULL
};

// Method Quit
static GDBusMethodInfo mp2_org_mpris_mediaplayer2_method_quit =
{
	-1,
	"Quit",
	NULL,
	NULL,
	NULL
};

// Array with method pointers
static GDBusMethodInfo * mp2_org_mpris_mediaplayer2_method_pointers[] =
{
	&mp2_org_mpris_mediaplayer2_method_raise,
	&mp2_org_mpris_mediaplayer2_method_quit,
	NULL
};

// Signals for org_mpris_mediaplayer2

// Properties for org_mpris_mediaplayer2

// Property CanQuit
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_property_canquit =
{
	-1,
	"CanQuit",
	"b",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Property Fullscreen
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_property_fullscreen =
{
	-1,
	"Fullscreen",
	"b",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE | G_DBUS_PROPERTY_INFO_FLAGS_WRITABLE,
	NULL
};

// Property CanSetFullscreen
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_property_cansetfullscreen =
{
	-1,
	"CanSetFullscreen",
	"b",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Property CanRaise
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_property_canraise =
{
	-1,
	"CanRaise",
	"b",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Property HasTrackList
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_property_hastracklist =
{
	-1,
	"HasTrackList",
	"b",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Property Identity
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_property_identity =
{
	-1,
	"Identity",
	"s",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Property DesktopEntry
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_property_desktopentry =
{
	-1,
	"DesktopEntry",
	"s",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Property SupportedUriSchemes
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_property_supportedurischemes =
{
	-1,
	"SupportedUriSchemes",
	"as",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Property SupportedMimeTypes
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_property_supportedmimetypes =
{
	-1,
	"SupportedMimeTypes",
	"as",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Array with property pointers
static GDBusPropertyInfo * mp2_org_mpris_mediaplayer2_property_pointers[] =
{
	&mp2_org_mpris_mediaplayer2_property_canquit,
	&mp2_org_mpris_mediaplayer2_property_fullscreen,
	&mp2_org_mpris_mediaplayer2_property_cansetfullscreen,
	&mp2_org_mpris_mediaplayer2_property_canraise,
	&mp2_org_mpris_mediaplayer2_property_hastracklist,
	&mp2_org_mpris_mediaplayer2_property_identity,
	&mp2_org_mpris_mediaplayer2_property_desktopentry,
	&mp2_org_mpris_mediaplayer2_property_supportedurischemes,
	&mp2_org_mpris_mediaplayer2_property_supportedmimetypes,
	NULL
};

// Interface org.mpris.MediaPlayer2
static GDBusInterfaceInfo mp2_org_mpris_mediaplayer2_interface =
{
	-1,
	"org.mpris.MediaPlayer2",
	mp2_org_mpris_mediaplayer2_method_pointers,
	NULL,
	mp2_org_mpris_mediaplayer2_property_pointers,
	NULL
};

GDBusInterfaceInfo *
mp2_org_mpris_mediaplayer2_get_interface_info(void)
{
	return &mp2_org_mpris_mediaplayer2_interface;
}

// Methods for org_mpris_mediaplayer2_player

// Method Next
static GDBusMethodInfo mp2_org_mpris_mediaplayer2_player_method_next =
{
	-1,
	"Next",
	NULL,
	NULL,
	NULL
};

// Method Previous
static GDBusMethodInfo mp2_org_mpris_mediaplayer2_player_method_previous =
{
	-1,
	"Previous",
	NULL,
	NULL,
	NULL
};

// Method Pause
static GDBusMethodInfo mp2_org_mpris_mediaplayer2_player_method_pause =
{
	-1,
	"Pause",
	NULL,
	NULL,
	NULL
};

// Method PlayPause
static GDBusMethodInfo mp2_org_mpris_mediaplayer2_player_method_playpause =
{
	-1,
	"PlayPause",
	NULL,
	NULL,
	NULL
};

// Method Stop
static GDBusMethodInfo mp2_org_mpris_mediaplayer2_player_method_stop =
{
	-1,
	"Stop",
	NULL,
	NULL,
	NULL
};

// Method Play
static GDBusMethodInfo mp2_org_mpris_mediaplayer2_player_method_play =
{
	-1,
	"Play",
	NULL,
	NULL,
	NULL
};

// Arguments seek for in

// Argument Offset
static GDBusArgInfo mp2_seek_arg_offset_in =
{
	-1,
	"Offset",
	"x",
	NULL
};

// Array with argument pointers
static GDBusArgInfo * mp2_seek_arg_in_pointers[] =
{
	&mp2_seek_arg_offset_in,
	NULL
};

// Method Seek
static GDBusMethodInfo mp2_org_mpris_mediaplayer2_player_method_seek =
{
	-1,
	"Seek",
	mp2_seek_arg_in_pointers,
	NULL,
	NULL
};

// Arguments setposition for in

// Argument TrackId
static GDBusArgInfo mp2_setposition_arg_trackid_in =
{
	-1,
	"TrackId",
	"o",
	NULL
};

// Argument Position
static GDBusArgInfo mp2_setposition_arg_position_in =
{
	-1,
	"Position",
	"x",
	NULL
};

// Array with argument pointers
static GDBusArgInfo * mp2_setposition_arg_in_pointers[] =
{
	&mp2_setposition_arg_trackid_in,
	&mp2_setposition_arg_position_in,
	NULL
};

// Method SetPosition
static GDBusMethodInfo mp2_org_mpris_mediaplayer2_player_method_setposition =
{
	-1,
	"SetPosition",
	mp2_setposition_arg_in_pointers,
	NULL,
	NULL
};

// Arguments openuri for in

// Argument Uri
static GDBusArgInfo mp2_openuri_arg_uri_in =
{
	-1,
	"Uri",
	"s",
	NULL
};

// Array with argument pointers
static GDBusArgInfo * mp2_openuri_arg_in_pointers[] =
{
	&mp2_openuri_arg_uri_in,
	NULL
};

// Method OpenUri
static GDBusMethodInfo mp2_org_mpris_mediaplayer2_player_method_openuri =
{
	-1,
	"OpenUri",
	mp2_openuri_arg_in_pointers,
	NULL,
	NULL
};

// Array with method pointers
static GDBusMethodInfo * mp2_org_mpris_mediaplayer2_player_method_pointers[] =
{
	&mp2_org_mpris_mediaplayer2_player_method_next,
	&mp2_org_mpris_mediaplayer2_player_method_previous,
	&mp2_org_mpris_mediaplayer2_player_method_pause,
	&mp2_org_mpris_mediaplayer2_player_method_playpause,
	&mp2_org_mpris_mediaplayer2_player_method_stop,
	&mp2_org_mpris_mediaplayer2_player_method_play,
	&mp2_org_mpris_mediaplayer2_player_method_seek,
	&mp2_org_mpris_mediaplayer2_player_method_setposition,
	&mp2_org_mpris_mediaplayer2_player_method_openuri,
	NULL
};

// Signals for org_mpris_mediaplayer2_player

// Arguments seeked for out

// Argument Position
static GDBusArgInfo mp2_seeked_arg_position_out =
{
	-1,
	"Position",
	"x",
	NULL
};

// Array with argument pointers
static GDBusArgInfo * mp2_seeked_arg_out_pointers[] =
{
	&mp2_seeked_arg_position_out,
	NULL
};

// Signal Seeked
static GDBusSignalInfo mp2_org_mpris_mediaplayer2_player_signal_seeked =
{
	-1,
	"Seeked",
	mp2_seeked_arg_out_pointers,
	NULL
};

// Array with signal pointers
static GDBusSignalInfo * mp2_org_mpris_mediaplayer2_player_signal_pointers[] =
{
	&mp2_org_mpris_mediaplayer2_player_signal_seeked,
	NULL
};

// Properties for org_mpris_mediaplayer2_player

// Property PlaybackStatus
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_player_property_playbackstatus =
{
	-1,
	"PlaybackStatus",
	"s",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Property LoopStatus
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_player_property_loopstatus =
{
	-1,
	"LoopStatus",
	"s",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE | G_DBUS_PROPERTY_INFO_FLAGS_WRITABLE,
	NULL
};

// Property Rate
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_player_property_rate =
{
	-1,
	"Rate",
	"d",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE | G_DBUS_PROPERTY_INFO_FLAGS_WRITABLE,
	NULL
};

// Property Shuffle
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_player_property_shuffle =
{
	-1,
	"Shuffle",
	"b",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE | G_DBUS_PROPERTY_INFO_FLAGS_WRITABLE,
	NULL
};

// Property Metadata
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_player_property_metadata =
{
	-1,
	"Metadata",
	"a{sv}",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Property Volume
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_player_property_volume =
{
	-1,
	"Volume",
	"d",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE | G_DBUS_PROPERTY_INFO_FLAGS_WRITABLE,
	NULL
};

// Property Position
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_player_property_position =
{
	-1,
	"Position",
	"x",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Property MinimumRate
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_player_property_minimumrate =
{
	-1,
	"MinimumRate",
	"d",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Property MaximumRate
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_player_property_maximumrate =
{
	-1,
	"MaximumRate",
	"d",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Property CanGoNext
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_player_property_cangonext =
{
	-1,
	"CanGoNext",
	"b",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Property CanGoPrevious
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_player_property_cangoprevious =
{
	-1,
	"CanGoPrevious",
	"b",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Property CanPlay
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_player_property_canplay =
{
	-1,
	"CanPlay",
	"b",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Property CanPause
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_player_property_canpause =
{
	-1,
	"CanPause",
	"b",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Property CanSeek
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_player_property_canseek =
{
	-1,
	"CanSeek",
	"b",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Property CanControl
static GDBusPropertyInfo mp2_org_mpris_mediaplayer2_player_property_cancontrol =
{
	-1,
	"CanControl",
	"b",
	G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
	NULL
};

// Array with property pointers
static GDBusPropertyInfo * mp2_org_mpris_mediaplayer2_player_property_pointers[] =
{
	&mp2_org_mpris_mediaplayer2_player_property_playbackstatus,
	&mp2_org_mpris_mediaplayer2_player_property_loopstatus,
	&mp2_org_mpris_mediaplayer2_player_property_rate,
	&mp2_org_mpris_mediaplayer2_player_property_shuffle,
	&mp2_org_mpris_mediaplayer2_player_property_metadata,
	&mp2_org_mpris_mediaplayer2_player_property_volume,
	&mp2_org_mpris_mediaplayer2_player_property_position,
	&mp2_org_mpris_mediaplayer2_player_property_minimumrate,
	&mp2_org_mpris_mediaplayer2_player_property_maximumrate,
	&mp2_org_mpris_mediaplayer2_player_property_cangonext,
	&mp2_org_mpris_mediaplayer2_player_property_cangoprevious,
	&mp2_org_mpris_mediaplayer2_player_property_canplay,
	&mp2_org_mpris_mediaplayer2_player_property_canpause,
	&mp2_org_mpris_mediaplayer2_player_property_canseek,
	&mp2_org_mpris_mediaplayer2_player_property_cancontrol,
	NULL
};

// Interface org.mpris.MediaPlayer2.Player
static GDBusInterfaceInfo mp2_org_mpris_mediaplayer2_player_interface =
{
	-1,
	"org.mpris.MediaPlayer2.Player",
	mp2_org_mpris_mediaplayer2_player_method_pointers,
	mp2_org_mpris_mediaplayer2_player_signal_pointers,
	mp2_org_mpris_mediaplayer2_player_property_pointers,
	NULL
};

GDBusInterfaceInfo *
mp2_org_mpris_mediaplayer2_player_get_interface_info(void)
{
	return &mp2_org_mpris_mediaplayer2_player_interface;
}

/* INTROSPECTION DATA END */

/* END OF FILE */
