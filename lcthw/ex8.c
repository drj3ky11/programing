/*
 * =====================================================================================
 *
 *       Filename:  ex8.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  23/02/21 13:36:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr Jekyll (@drj3ky11), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	if (argc == 1) {
		printf("You only have one argument. You suck.\n");
	} else if (argc > 1 && argc < 4) {
		printf("Here's your arguments:\n");

		for (i = 0; i < argc; i++) {
			printf("%s ", argv[i]);
		}
		printf("\n");
	} else {
		printf("You have too many arguments. You suck. \n");
	}
	return 0;
}
