#include "holberton.h"

/**
 * get_bit - Function that returns the value of a bit
 * @n: Number
 * @index: Index of number
 * Return: Number in Index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0, res;

	unsigned int j;

	while (n >> i)
		i++;

	for (j = i - 1; ; j--)
	{
		res = n >> j;

		if (j == index)
		{
			if (res & 1)
				return (1);
			else
				return (0);
		}
	}

	return (-1);
}
