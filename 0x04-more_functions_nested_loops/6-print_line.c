#include "holberton.h"

/**
 * print_line - Print the lines depending on the number of "n"
 * @n: The limit number
 * Return: The output
 */

void print_line(int n)
{

	if (n != 0 && n > 0)
	{
		int numW = 0;

		while (numW < n)
		{
			_putchar (95);
			numW++;
		};
		_putchar ('\n');

	} else if (n == 0 || n < 0)
	{
		_putchar ('\n');
	}
}
