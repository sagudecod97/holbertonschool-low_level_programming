#include "holberton.h"

/**
 * twoPower - Function that gives the power of a number
 * @num: Number
 * Return: The number's power
 */

unsigned int twoPower(int num)
{
	int i;

	unsigned int result = 1;

	for (i = 1; i <= num; i++)
	{
		result = result * 2;
	};

	return (result);
}

/**
 * binary_to_uint - Function that converts a binary number
 * @b: Binary number
 * Return: Unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	int i = 0, j, power;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
		i++;

	power = i;

	for (j = 0; j < i; j++)
	{
		if (b[j] == '1')
		{
			result += twoPower(power - 1);
			power--;
		} else if (b[j] == '0')
		{
			result += 0;
			power--;
		} else
		{
			return (0);
			break;
		}
	};

	return (result);
}
