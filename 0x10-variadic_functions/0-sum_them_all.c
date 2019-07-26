#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters
 * @n: Number of params
 * Return: The sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;

	unsigned int  sum = 0, i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	};

	va_end(valist);

	return (sum);
}
