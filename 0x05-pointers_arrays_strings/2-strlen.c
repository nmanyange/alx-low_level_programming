#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @str: the string to get the length of
 * Return: The length of @str
 */
int _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
