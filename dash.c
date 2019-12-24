/*
 * Copyright (c) 2019 Daisuke Nishimura <dnish324@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ARG_MAX	16

static void
show_prompt(void) {
	printf("> ");
}

static void
free_argv(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		free(argv[i]);

	return;
}

static int
read_cmdline(char *argv[]) {
	return 0;
}

static int
run_cmd(int argc, char *argv[])
{
	return 0;
}

int
main(void)
{
	do {
		int argc;
		char *argv[ARG_MAX];
		int ret;

		show_prompt();
		argc = read_cmdline(argv);
		ret = run_cmd(argc, argv);

		free_argv(argc, argv);
	} while (true);

	return 0;
}