#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - Function that prints numbers
 * @separator: Separator
 * @n: Number of params
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;

	unsigned int i, num;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(valist, int);

		if (i < (n - 1) && separator != NULL) 
		{
			printf("%d%s ", num, separator);	
		} else
		{
			printf("%d\n", num);
		}
	};

	va_end(valist);
}
