/*
 * =====================================================================================
 *       Filename:  ex1-5.c
 *        Version:  1.0
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  Dr Jekyll (@drj3ky11), 
 * =====================================================================================
 */
#include <stdio.h>
/* pirnt Fahrenheit-Celsius table
 * for fhar =0, 20, 40 ... 300 */
int FahrToCel() {
	float  fr, cl;
	printf("Fahr\t\tCelsius\n");
// Just doing it with a for and from 300 to 0
	for (fr = 300.0; fr >= 0; fr = fr - 20) {
		cl = (5.0 / 9.0) * (fr - 32.0);
		printf("%3.0f\t\t%6.1f\n", fr, cl); // %3.0d three char and no decimal %6.1d six char and 1 decimal
	}
	return 1;
}

int CelToFahr(float lw, float upp, float st){
	
	float fahr, celsius;
	celsius = lw;
	printf("Celsius\t\tFahr\n");
	while (celsius <= upp) {
		fahr = (9.0 / 5.0) * (celsius + 32.0);
		printf("%3.0f\t\t%6.1f\n", celsius, fahr);
		celsius = celsius + st;
	}
}

int main()
{
	float lower, step, upper;

	lower = 0;
	upper = 300;
	step = 20;
	printf("Celsius to Farh table:\n");
	CelToFahr(lower, upper, step);
	printf("**********************************\n");
	printf("Fahr to Celsius table:\n");
	FahrToCel();
	return 0;
}


