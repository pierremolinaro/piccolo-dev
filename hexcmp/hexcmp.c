/* hexcmp.c
 *
 * Main function for Hexcmp.
 *
 * Copyright 2001, 2002 by David Sullins
 *
 * This file is part of Hexcmp.
 * 
 * Hexcmp is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free
 * Software Foundation, version 2 of the License.
 * 
 * Hexcmp is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with Hexcmp; if not, write to the Free Software Foundation, Inc., 59
 * Temple Place, Suite 330, Boston, MA 02111-1307 USA
 * 
 * You may contact the author at davesullins@earthlink.net.
 */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include "hexfile.h"
#include "distypes.h"

/* bytecmp
 *
 * Return first byte that differs between two buffers, or else -1 if buffers
 * are the same.
 */
int bytecmp(const char *b1, const char *b2, int n)
{
	int i;
	
	for (i = 0; i < n; ++i)
	{
		if (*b1++ != *b2++)
			return i;
	}
	return -1;
}

int main(int argc, char **argv)
{
	struct hexfile file1, file2;
	int addr, memdiff, flagdiff;
	
	/* parse command line */
	if (argc != 3) {
		printf("Usage: %s file1.hex file2.hex\n", argv[0]);
		exit(0);
	}
	
	/* open files for reading */
	if (init_hexfile(&file1, 65536, NULL, argv[1])) {
		fprintf(stderr, "Error reading file %s.\n", argv[1]);
		exit(1);
	}
	if (init_hexfile(&file2, 65536, NULL, argv[2])) {
		fprintf(stderr, "Error reading file %s.\n", argv[2]);
		exit(1);
	}
	
	/* parse hex files */
	if (read_hex(&file1)) {
		printf("Error reading hex file %s.\n", argv[1]);
		exit(1);
	}
	if (read_hex(&file2)) {
		printf("Error reading hex file %s.\n", argv[2]);
		exit(1);
	}
	
	/* compare files */
	memdiff = bytecmp ((const char *) file1.mem, (const char *) file2.mem, 65536);
	flagdiff = bytecmp ((const char *) file1.flag, (const char *) file2.flag, 65536);

	if ((flagdiff == -1) && (memdiff == -1)) {
		printf("%s and %s are identical.\n", argv[1], argv[2]);
		return 0;
	}
	
	/* hex files differ */
	addr = ((unsigned)memdiff < (unsigned)flagdiff) ? memdiff : flagdiff;
	printf("%s and %s differ at memory address %Xh.\n",
		argv[1], argv[2], addr);

	/* first hex file */
	printf("%s: ", argv[1]);
	if (file1.flag[addr] == EMPTY)
		printf("empty\n");
	else
		printf("%Xh\n", file1.mem[addr]);

	/* second hex file */
	printf("%s: ", argv[2]);
	if (file2.flag[addr] == EMPTY)
		printf("empty\n");
	else
		printf("%Xh\n", file2.mem[addr]);
	
	return 1;
}
