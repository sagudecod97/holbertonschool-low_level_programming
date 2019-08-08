#include "holberton.h"

/**
 * print_binary - Function that prints the binary
 * @n: Number to represent
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int iter, i, j = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	while (n >> j)
		j++;

	for (i = j - 1; i >= 0; i--)
	{
		iter = n >> i;

		if (iter & 1)
		{
			_putchar('1');
		} else
		{
			_putchar('0');
		}
	};
}
