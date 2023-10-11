#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: pointer of the name
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
