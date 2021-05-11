/*
 * =====================================================================================
 *
 *       Filename:  digi.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/05/21 13:03:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr Jekyll (@drj3ky11), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
/* count digits, white space, others */
main()
{
	int c, i, nwhite, nother;
	int ndigit[10];
	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;
	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);
}
