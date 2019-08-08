#include "holberton.h"

/**
 * set_bit - Function that sets the value of a bit to 1
 * @n: Number
 * @index: Index
 * Return: 1 on Success, -1 on Error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;

	if (index > (sizeof(n) * 8))
		return (-1);

	tmp = 1 << index;

	*n = *n | tmp;

	return (1);
}
