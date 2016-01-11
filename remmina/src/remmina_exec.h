/*
 * Remmina - The GTK+ Remote Desktop Client
 * Copyright (C) 2010 Vic Lee
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 *
 *  In addition, as a special exception, the copyright holders give
 *  permission to link the code of portions of this program with the
 *  OpenSSL library under certain conditions as described in each
 *  individual source file, and distribute linked combinations
 *  including the two.
 *  You must obey the GNU General Public License in all respects
 *  for all of the code used other than OpenSSL. *  If you modify
 *  file(s) with this exception, you may extend this exception to your
 *  version of the file(s), but you are not obligated to do so. *  If you
 *  do not wish to do so, delete this exception statement from your
 *  version. *  If you delete this exception statement from all source
 *  files in the program, then also delete it here.
 *
 */

#ifndef __REMMINAEXEC_H__
#define __REMMINAEXEC_H__

G_BEGIN_DECLS

typedef enum
{
	REMMINA_COMMAND_NONE = 0,
	REMMINA_COMMAND_MAIN = 1,
	REMMINA_COMMAND_PREF = 2,
	REMMINA_COMMAND_NEW = 3,
	REMMINA_COMMAND_CONNECT = 4,
	REMMINA_COMMAND_EDIT = 5,
	REMMINA_COMMAND_ABOUT = 6,
	REMMINA_COMMAND_PLUGIN = 7,
	REMMINA_COMMAND_EXIT = 8
} RemminaCommandType;

void remmina_exec_command(RemminaCommandType command, const gchar* data);
void remmina_exec_exitremmina(void);

G_END_DECLS

#endif  /* __REMMINAEXEC_H__  */

