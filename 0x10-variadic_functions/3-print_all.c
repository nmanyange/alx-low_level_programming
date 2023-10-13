#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_all - prints anything
 * @format: a list of type of arguments
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	va_list args;
	const char *format_ptr = format;

	va_start(args, format);

	while (*format_ptr)
	{
		if (*format_ptr == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
		}
		else if (*format_ptr == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
		}
		else if (*format_ptr == 'f')
		{
			printf("%s%f", separator, va_arg(args, double));
		}
		else if (*format_ptr == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
			{
				printf("%s(nil)", separator);
			}
			else
			{
				printf("%s%s", separator, str);
			}
		}
		separator = ", ";
		format_ptr++;
	}
	va_end(args);
	printf("\n");
}
