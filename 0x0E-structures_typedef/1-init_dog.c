#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - entry point
 * @d: pointer to the struct
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
