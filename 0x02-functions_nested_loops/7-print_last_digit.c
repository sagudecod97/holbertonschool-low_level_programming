#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Number to test
 * Return: the number
 */

int print_last_digit(int n)
{

	int last, mod;

	last = n % 10;

	if (last > 0)
	{
		mod = last + 48;
		_putchar (mod);
		return (last);
	}
	mod = (last * -1) +  48;
	_putchar (mod);
	return (last * -1);

}
