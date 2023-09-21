#include "main.h"
#include <stdio.h>

/**
 * leet - encodes into a string 1337
 * @s: analyzed string
 * Return: A string with letters changed
 */
char *leet(char *s)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int i =  0;
	int j;

	while (*(s + i) != '\0')
	{
		for  (j = 0; j <= 9; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = n[j];
			}
		}
		i++;
	}
	return (s);
}
