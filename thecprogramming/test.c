/*
 * =====================================================================================
 *       Filename:  test.c
 *        Version:  1.0
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  Dr Jekyll (@drj3ky11), 
 * =====================================================================================
 */
#include <stdio.h>

main() {
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);

}

