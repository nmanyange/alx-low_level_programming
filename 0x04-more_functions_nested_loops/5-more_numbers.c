#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
