#include "holberton.h"

/**
 * puts2 - Prints only the 2nd half of a string
 * @str: String
 * Return: void
 */

void puts2(char *str)
{
	int n = 1, j = 0;

	while (*(str + n) != 0)
	{
		n++;
	}
	while (j < n)
	{
		if (j % 2 == 0)
		{
			_putchar (*(str + j));
			j++;
		};
		j++;

	};
	_putchar ('\n');

}
