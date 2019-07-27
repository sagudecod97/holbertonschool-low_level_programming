#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Function that prints strings
 * @separator: Separator
 * @n: Number of params
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;

	unsigned int i;

	char * strings;

	va_start(valist,n);

	for (i = 0; i < n; i++)
	{
		strings = va_arg(valist, char *);

		if (separator != NULL && i < (n - 1) && strings != NULL)
		{
			printf("%s%s", strings, separator);
		} else if (strings == NULL)
		{
			printf("(nil)%c ", *separator);
		} else
		{
			printf("%s", strings);
		}
	};
	printf("\n");

	va_end(valist);
}
