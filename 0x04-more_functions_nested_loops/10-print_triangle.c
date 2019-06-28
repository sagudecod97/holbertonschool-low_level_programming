#include "holberton.h"

/**
 * print_triangle - Prints triangules
 * @size: Size of the triangule
 * Return: The triangule
 */

void print_triangle(int size)
{
	int n, space, square;

	if (size == 0)
	{
		_putchar ('\n');
	}else
	{
		for (n = 1; n <=  size; n++)
		{
			space = size;

			while (space > n)
			{
				_putchar ('.');
				space--;
			}

			square = space - n;

			while (square < space)
			{
				_putchar (35);
				square++;
			}
			_putchar('\n');
		}
	}
}
