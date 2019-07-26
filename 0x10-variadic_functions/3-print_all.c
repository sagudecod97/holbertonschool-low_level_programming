#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - Function that prints anything
 * @format: Types of data
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0, flag = 1;
	char *s;
	va_list valist;

	va_start(valist, format);

	while (format[i] != '\0')
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
			default:
				flag = 0;
		}
		if (format[(i + 1)] != '\0' && (format[i] == 'c' || format[i] == 'i'
			|| format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
