#include "main.h"

/**
 * _putchar - prints a character
 * @c: char input
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
