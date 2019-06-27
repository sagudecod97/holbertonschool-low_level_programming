#include "holberton.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9, except 2 and 4.
 * Return: Numbers from 0 to 9. but not 2 and 4.
 */

void  print_most_numbers(void)
{
	int num;

	num = 48;

	while (num <= 57)
	{
		if (num != 50 && num != 52)
		{
			_putchar (num);
		}
		num++;
	};

	_putchar ('\n');
}
