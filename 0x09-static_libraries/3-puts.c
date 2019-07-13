#include "holberton.h"

/**
 * _puts - Prints the string
 * @str: input String
 * Return: void
 */

void _puts(char *str)
{
	int n = 0;

	while (*(str + n) != '\0')
	{
		_putchar(str[n]);
		n++;
	};

	_putchar ('\n');
}
