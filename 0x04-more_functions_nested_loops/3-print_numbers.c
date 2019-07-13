#include "holberton.h"

/**
 * print_numbers - Prints the numbers from 0 to 9
 * Return: The numbers
 */

void print_numbers(void)
{
	int num;

	num = 48;

	while (num <= 57)
	{
		_putchar (num);
		num++;
	};

	_putchar ('\n');
}
