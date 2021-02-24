/*
 * =====================================================================================
 *
 *       Filename:  ex7.c
 *
 *    Description: ex7 
 *
 *        Version:  1.0
 *        Created:  23/02/21 11:05:43
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr Jekyll (@drj3ky11), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(int argc, char*argv[])
 {
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4535;
	char initial = 'A';
	char first_name[] = "Zed";
	char last_name[] = "Shaw";
	
	printf("You are %d miles away. \n", distance);
	/* d,i: The int argument is converted to signed decimal notation.
        The precision, if any, gives the minimum number of digits
        that must appear; if the converted value requires fewer
        digits, it is padded on the left with zeros.  The default
        precision is 1.  When 0 is printed with an explicit
        precision 0, the output is empty. */
	printf("You have %f levels of power. \n", power);
	/*  f, F   The double argument is rounded and converted to decimal
        notation in the style [-]ddd.ddd, where the number of
        digits after the decimal-point character is equal to the
        precision specification.  If the precision is missing,
        is taken as 6; if the precision is explicitly zero, no
        decimal-point character appears.  If a decimal point
	appears, at least one digit appears before it. */
	printf("You have %f awesome super power. \n", super_power);
	printf("I have an initial %c. \n", initial);
	/* c the int argument is converted to an unsigned char */
	printf("I have a first name  %s. \n", first_name);
	/* s the const char * argument is expected to be a pointer to
 * an array of character type 
 * (pointer to a string).  Characters from the array are
 * written up to (but not including) a terminating null byte
 * ('\0'); if a precision is specified, no more than the
 *  number specified are written. */
	printf("I have a last name %s. \n", last_name);
	printf("My whole name is %s %c. %s. \n", first_name, initial, last_name);
	int bugs = 100;
	double bug_rate = 1.2;
	
	printf("You have %d bugs at the imaginary rate of %f. \n", bugs, bug_rate);
	long universe_of_defects = 1L * 1024L * 1024L * 1024L;
	printf("The entire universe has %ld bugs.\n", universe_of_defects);
/*        l      (ell) A following integer conversion corresponds to a long
              or unsigned long argument, or a following n conversion
              corresponds to a pointer to a long argument, or a
              following c conversion corresponds to a wint_t argument,
              or a following s conversion corresponds to a pointer to
              wchar_t argument. */
	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs.\n", expected_bugs);
	double part_of_universe = expected_bugs / universe_of_defects;
	printf("That is only a %e portion of the universe.\n", part_of_universe);
/* e, E   The double argument is rounded and converted in the style
              [-]d.ddde±dd where there is one digit (which is nonzero if
              the argument is nonzero) before the decimal-point
              character and the number of digits after it is equal to
              the precision; */
	// This make no sense, just a demo of somethin weird
	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	printf("Which means you should care %d%%.\n", care_percentage);

	return 0;
 }
