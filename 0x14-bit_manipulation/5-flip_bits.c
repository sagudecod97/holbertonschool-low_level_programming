#include "holberton.h"

/**
 *  flip_bits - Flip one number to another
 * @n: 1st Number
 * @m: 2nd Number
 * Return: Number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, result = 0;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if ((m >> i & 1) ^ (n >> i & 1))
		{
			result += 1;
		};
	};

	return (result);
}
