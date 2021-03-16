## The Undefined Behavior

Undefined Behavior (UB). UB is a part of the American National Standards Institute (ANSI) C standard that lists all of the ways that a C compiler can disregard what you’ve written. UB occurs when a C program reads off the end of a string. For a bit of background, **C defines strings as blocks of memory that end in a NUL byte**, or a 0 byte (to simplify the definition). 
Since many strings come from outside the program, it’s common for a C program to receive a string without this NUL byte. When it does, the C program attempts to read past the end of this string and into the memory of the computer, causing your program to crash. Every other language developed after C attempts to prevent this, but not C. C does so little to prevent UB that every C programmer seems to think it means they don’t have to deal with it.

Multiline commentes always between /* comment */ 

A variable declaration and assignment at the same time. This is how you create a variable, with the syntax:

	type name = value

[ASCII Table](http://www.asciitable.com/)

##GDB

Antes de nada, para no leer el código esamblado es mejor compilar:

	gcc -g -o test test.c

set arguments para pasarle argumentos

Para empezar a pocos se usa **start** y crea u bkp temporal

**list** imprime 10 línieas de código

layout next
b main para poner un break point en el inicio

## Data types

Data Type             Memory (bytes)          Range                      Format Specifier
short int                   2          -32,768 to 32,767                       %hd
unsigned short int          2           0 to 65,535                            %hu
unsigned int                4           0 to 4,294,967,295                     %u
int                         4          -2,147,483,648 to 2,147,483,647         %d
long int                    4          -2,147,483,648 to 2,147,483,647         %ld
unsigned long int           4           0 to 4,294,967,295                     %lu
long long int               8          -(2^63) to (2^63)-1                     %lld
unsigned long long int      8           0 to 18,446,744,073,709,551,615        %llu
signed char                 1          -128 to 127                             %c
unsigned char               1           0 to 255                               %c
float                       4               -                                  %f
double                      8               -                                  %lf
long double                 12              -                                  %Lf
