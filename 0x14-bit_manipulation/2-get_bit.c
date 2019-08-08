#include "holberton.h"

/**
 * get_bit - Function that returns the value of a bit
 * @n: Number
 * @index: Index of number
 * Return: Number in Index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int res = 0;

	unsigned int i = 0;

	while (n >> i)
		i++;

	if (index > i)
	{
		return (-1);
	};

	res = n >> index;

	res = res & 1;

	return (res);

}
