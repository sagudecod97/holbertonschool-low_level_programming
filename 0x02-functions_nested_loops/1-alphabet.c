#include "holberton.h"

/**
 * print_alphabet - prints the whole alphabet
 * Return: 1
 */

void print_alphabet(void)
{

	int letters;

	for (letters = 97; letters <= 122; letters++)
	{
		_putchar (letters);
	};
	_putchar ('\n');
}
