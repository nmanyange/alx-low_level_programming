#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: number of elements
 * @cmp: pointer to the function used to compare values
 * Return: 0 on success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0))
		{
			return (1);
		}
	}
	return (-1);
}
