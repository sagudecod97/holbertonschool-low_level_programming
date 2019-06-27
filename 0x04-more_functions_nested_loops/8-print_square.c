#include "holberton.h"

/**
 * print_square - Prints an square of the given size
 * @size: Size given
 * Return: A square
 */

void print_square(int size)
{
	int n;

	if (size == 0 || size < 0)
	{
		_putchar ('\n');
	} else

		for (n = 0; n < size; n++)
		{
			int square;

			square = 0;

			while (square < size)
			{
				_putchar (35);
				square++;
			}
			_putchar ('\n');
		}
}
