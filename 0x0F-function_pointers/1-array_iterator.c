#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 * @array: array of integers
 * @size: of array
 * @action: pointer to function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
