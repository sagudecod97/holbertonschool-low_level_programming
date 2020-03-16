#include "search_algos.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * jump_search - function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array: array
 * @size: size array
 * @value: value
 * Return: index value
 */

int jump_search(int *array, size_t size, int value)
{
	size_t prev, move;

	if (!array)
		return (-1);

	printf("Value checked array[0] = [%i]\n", array[0]);
	if (array[0] == value)
		return (0);

	prev = 0;
	move = sqrt(size);
	while ((move < size) & (array[move] < value))
	{
		printf("Value checked array[%li] = [%i]\n", move, array[move]);
		prev = move;
		move += sqrt(size);
		if (prev >= size)
			return (-1);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, move);
	while ((prev < size) & (array[prev] <= value))
	{
		printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);

		if (array[prev] == value)
			return (prev);

		prev++;
	}
	return (-1);
}
