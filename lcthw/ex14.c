/*
 * =====================================================================================
 *
 *       Filename:  ex14.c
 *
 *    Description: Using Functions 
 *
 *        Version:  1.0
 *        Created:  25/02/21 14:15:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr Jekyll (@drj3ky11), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>
int argc;
char *argv[];
// forward declarations
int can_print_it(char ch);
void print_letters(char arg[]);
char **arg = argv;
void print_arguments(int argc, char arg)
{
	int i = 0;
	// Some problem with 0 index, i do not want to print de 0
	for (i = 1; i < argc; i++) {
		print_letters(arg);
	}
}

void print_letters(char arg2[])
{
	int i = 0;
	for (i = 0; arg2[i] != '\0'; i++) {
		char ch = arg2[i];
		if (can_print_it(ch)) {
			printf("'%c' == %d", ch, ch);
		}
	}
	printf("\n");
}

int can_print_it(char ch)
{
	return isalpha(ch) || isblank(ch);
}

int main (argc, argv[])
{
	print_arguments(argc, argv);
	return 0;
}
