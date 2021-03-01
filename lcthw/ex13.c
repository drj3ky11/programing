/*
 * =====================================================================================
 *
 *       Filename:  ex13.c
 *
 *    Description: For-Loops and Arrays of Strings 
 *
 *        Version:  1.0
 *        Created:  25/02/21 11:23:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr Jekyll (@drj3ky11), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main (int argc, char *argv[])
{
	int i = 0;
	// go through each string in argv
	for (i = 1; i < argc; i++){
		printf("arg %d: %s\n", i, argv[i]);
	}

	// Our own array of strings
	char california[] = {'t', 'e', 's', 't'};
	// Just seeng how two dimensions works on arrays
	char *states[] ={
		california, "Oregon", "Washington", "Texas"
	};

	int num_states = 5;

	for (i = 0; i < num_states; i++){
		printf("state %d: %s\n", i, states[i]);
	}
	return 0;
}
