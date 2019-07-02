#include "holberton.h"

/**
 * print_rev - Prints the string reversed
 * @s: Input string
 * Return: void
 */

void print_rev(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}

	while (n > 0)
	{
		n--;
		_putchar (*(s + n));
	}

	_putchar ('\n');
}
