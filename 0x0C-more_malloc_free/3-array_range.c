#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - Function that creates an array of integers
 * @min: Minimum
 * @max: Maximum
 * Return: An int pointer
 */

int *array_range(int min, int max)
{
	int *pint, i, sum;

	sum = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}

	pint = malloc(sum * sizeof(int));

	if (pint == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < sum; i++)
	{
		pint[i] = min;
		min++;
	}

	return (pint);
}
