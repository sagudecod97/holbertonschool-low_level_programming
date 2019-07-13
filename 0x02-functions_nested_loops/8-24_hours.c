#include "holberton.h"

/**
 * jack_bauer - Prints all the hours
 * Return: the call of the function
 */

void jack_bauer(void)
{

	int frsH, scnH, frsM, scnM;

	for (frsH = 0; frsH <= 2; frsH++)
	{
		for (scnH = 0; scnH <= 9; scnH++)
		{
			for (frsM = 0; frsM <= 5; frsM++)
			{
				for (scnM = 0; scnM <= 9; scnM++)
				{
					_putchar (frsH + 48);
					_putchar (scnH + 48);
					_putchar (58);
					_putchar (frsM + 48);
					_putchar (scnM + 48);
					_putchar ('\n');
				}
			}
		}
	}
}
