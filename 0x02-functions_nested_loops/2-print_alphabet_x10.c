#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 * Return: -1
 */
void print_alphabet_x10(void)
{

	int first_W;

	first_W = 0;

	while (first_W <= 9)
	{

		int n;

		for (n = 97; n <= 122; n++)
		{
			_putchar (n);
		};
		first_W++;
		_putchar ('\n');

	}
}
