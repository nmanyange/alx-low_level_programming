#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - entry point
 * @d: input
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog
	{
		char name[];
		float age;
		char owner[];
	};

	printf("name: %s\n", name);
	printf("age: %f\n", age);
	printf("owner: %s\n", owner);

	return (0);
}
