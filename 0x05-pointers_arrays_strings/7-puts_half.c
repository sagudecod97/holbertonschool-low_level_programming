#include "holberton.h"

/**
 * puts_half - Prints the 2nd half of a string
 * @str: String
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0, nOdd, nEven;

	while (*(str + length) != '\0')
	{
		length++;
	};

	if (length % 2 != 0)
	{
		nOdd = (length - 1) / 2;
		while (nOdd < length)
		{
			_putchar (*(str + nOdd));
			nOdd++;
		}

	} else if (length % 2 == 0)
	{
		nEven = length / 2;
		while (nEven < length)
		{
			_putchar (*(str + nEven));
			nEven++;
		}
	}
	_putchar ('\n');
}
