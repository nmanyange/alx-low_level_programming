#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_all - prints anything
 * @format: argument specifier
 *
 * Return: any argument given based on the format specifier
 */
void print_all(const char * const format, ...)
{
	int i, check_stat;
	char *str;
	va_list args;

	va_start(args, format);

	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				check_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				check_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				check_stat = 0;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				check_stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && check_stat == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
