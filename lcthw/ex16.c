/*
 * =====================================================================================
 *       Filename:  ex16.c
 *    Description:  
 *        Version:  1.0
 *        Created:  15/03/21 11:13:40
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  Dr Jekyll (@drj3ky11)
 * =====================================================================================
 */
#include <stdio.h>
#include <assert.h> //incluye la assert que hace una comprobación de una suposición
#include <stdlib.h>
#include <string.h> //strdup hace un duplicado de la cadena dada reservando dinámicamente la memoria necesaria 

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person)); //I use malloc for memory allocate to ask the OS to give me a piece of raw memory
	assert(who != NULL); //I use assert to make sure that I have a valid piece of memory back from malloc. 
	
	who->name = strdup(name); //I use the strdup function to duplicate the string for the name, just to make sure that this structure actually owns it. The strdup actually is like malloc, and it also copies the original string into the memory it creates
	who->age = age;
	who->height = height;
	who->weight = weight;

	return who;
}

void Person_destroy(struct Person *who)
{
	assert(who != NULL);

	free(who->name);
	free(who);
}

void Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}

int main (int argc, char *argv[])
{
	//make two people
	char *nom = argv[1];
	int edad = atoi(argv[2]); // Con aotoi() paso de char * a int
	int peso = atoi(argv[3]);
	int altura = atoi(argv[4]);	

	struct Person *joe = Person_create("Joe Alex", 32, 64 ,140);
	struct Person *frank = Person_create("Frank Jungla", 34, 68 ,150);
	struct Person *test1 = Person_create(nom, edad, peso, altura);

	printf("Joe is at memoi location %p:\n", joe);
	Person_print(joe);
	
	printf("%s is at memory loaction %p:\n", nom, test1);
	Person_print(test1);
	
	joe->age += 20;
	Person_print(joe);
	
	printf("Frank is at memoi location %p:\n", frank);

	Person_destroy(joe);
	Person_destroy(test1);
	Person_destroy(frank);
	return 0;
}
