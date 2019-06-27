#include "holberton.h"

/**
 * more_numbers - Prints the numbers from 0 to 14 ten times
 * Return: The numbers printed
 */

void more_numbers(void)
{
	int num, forN;

	num = 0;

	for (forN = 0; forN < 10; forN++)
	{
		for (num = 0; num <= 14; num++)
		{
			int mod;

			mod = num % 10;

			if (num <= 14)
			{
				if (num > 9)
				{
					_putchar (49);
				};
				_putchar (mod + 48);
			};

		}
		_putchar ('\n');
	}
}
