#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * put_a_comma - Prints a comma
 * @format: String
 * @i: Outside counter
 * Return: Nothing
 */

void put_a_comma(const char *format, int i)
{
	int in;

	in = i + 1;

	while (format[in] != '\0' && (format[i] == 'c'
		|| format[i] == 'f' || format[i] == 'i'
		|| format[i] == 's'))
	{
		if (format[in] == 'c' || format[in] == 'f'
		|| format[in] == 's' || format[in] == 's')
		{
			printf(", ");
			break;
		};
		in++;
	}
}
/**
 * print_all - Function that prints anything
 * @format: Types of data
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	va_list valist;

	va_start(valist, format);

	while (format[i] != '\0' && format)
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(valist, int));
				break;
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				s = va_arg(valist, char*);
				if (s == NULL)
				{	printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		put_a_comma(format, i);
		i++;
	}
	va_end(valist);
	printf("\n");
}
