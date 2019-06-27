#include "holberton.h"

/**
 * print_diagonal - Prints diagonal lines
 * @n: Number of lines to print
 * Return: The number of lines wanted to be printed
 */

void print_diagonal(int n)
{
	int num, b;

	if (n == 0 || n < 0)
	{
		_putchar ('\n');
	}
	for (num = 0; num < n; num++)
	{
		b = (n + 1) - (n + 1);
		while (b < num)
		{
			_putchar(32);
			b++;
		}
		_putchar (92);
		_putchar ('\n');
	}
}
