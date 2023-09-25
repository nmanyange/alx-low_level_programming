
#include "main.h"
#include <stdio.h>

/**
 * _memcpy - entry point
 * @dest: output destination
 * @src: input
 * @n: number of bytes
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
