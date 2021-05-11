/*
 * =====================================================================================
 *
 *       Filename:  histo.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/05/21 13:21:59
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr Jekyll (@drj3ky11), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

main() {
	int nchar[10];
	int c, i, z, q, t, j;
	z = q = t = j = 0;
	for (i = 0; i < 10; ++i)
		nchar[i] = 0;
	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\n' && c != EOF) {
			++q;
			nchar[z] = q;
		}
		else if (c == ' ' || c == '\n' || c == '\t') {
			q = 0;
			++z;
		}
		}
	for (i = 0; i < 10; ++i) {
		t = nchar[i];
		printf("\nPalabra %d\n", i);
		for (j = 0; j < t; ++j)
			printf("**");
	}
/* Ahora vamos a intentra en horizontal */
	printf("\n---------------\n");
	printf("\n---------------\n");
	int funo[10], fdos[10], ftres[10], fc[10], fcin[10], fsei[10], fse[10], foc[10], fn[10];
	for (i = 0; i < 10; ++i)
		funo[i] = fdos[i] = ftres[i] = fc[i] = fcin[i] = fsei[i] = fse[i] = foc[i] = fn[i] = 0;
	/* Tendría que variar el orden de imprimir, empezar por fn[] para que sea correcto */
	for (i = 0; i < 10; ++i) {
		t = nchar[i];
		if (t == 9) 
			funo[i] = fdos[i] = ftres[i] = fc[i] = fcin[i] = fsei[i] = fse[i] = foc[i] = fn[i] = 1;
		else if (t == 8) 
			funo[i] = fdos[i] = ftres[i] = fc[i] = fcin[i] = fsei[i] = fse[i] = foc[i] = 1;
		else if (t == 7) 
			funo[i] = fdos[i] = ftres[i] = fc[i] = fcin[i] = fsei[i] = fse[i] = 1;
		else if (t == 6) 
			funo[i] = fdos[i] = ftres[i] = fc[i] = fcin[i] = fsei[i] = 1;
		else if (t == 5) 
			funo[i] = fdos[i] = ftres[i] = fc[i] = fcin[i] = 1;
		else if (t == 4) 
			funo[i] = fdos[i] = ftres[i] = fc[i] = 1;
		else if (t == 3) 
			funo[i] = fdos[i] = ftres[i] = 1;
		else if (t == 2) 
			funo[i] = fdos[i] = 1;
		else if (t == 1)
			funo[i] = 1;
		else
			funo[i] = fdos[i] = ftres[i] = fc[i] = fcin[i] = fsei[i] = fse[i] = foc[i] = fn[i] = 0;
	}
	for (i = 0; i < 10; ++i) 
		printf("%d",funo[i]);
	printf("\n");
	for (i = 0; i < 10; ++i) 
		printf("%d",fdos[i]);
	printf("\n");
	for (i = 0; i < 10; ++i)
		printf("%d",ftres[i]);	
	printf("\n");
	for (i = 0; i < 10; ++i)
		printf("%d",fc[i]);
	printf("\n");
	for (i = 0; i < 10; ++i)
		printf("%d",fcin[i]);
	printf("\n");
	for (i = 0; i < 10; ++i)
		printf("%d",fsei[i]);
	printf("\n");
	for (i = 0; i < 10; ++i)
		printf("%d",fse[i]);
	printf("\n");
	for (i = 0; i < 10; ++i)
		printf("%d",foc[i]);
	printf("\n");
	for (i = 0; i < 10; ++i)
		printf("%d",fn[i]);
}
