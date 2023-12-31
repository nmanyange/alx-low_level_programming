#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - new dog information to be created
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: pointer to the new string
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t n, o, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	for (n = 0; name[n]; n++)
		;
	n++;
	dog->name = malloc(sizeof(char) * n);
	if (dog->name == NULL)
		free(dog);
	return (NULL);
	for (i = 0; i < n; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (o = 0; owner[o]; o++)
		;
	o++;
	dog->owner = malloc(sizeof(char) * o);
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < o; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
