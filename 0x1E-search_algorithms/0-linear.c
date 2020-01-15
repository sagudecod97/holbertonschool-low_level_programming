#include "search_algos.h"

/**
 * linear_search - search using Linear search
 * @array: Array of ints
 * @size: Array's size
 * @value: Value to find
 * Return: Index on success -1 on Failure
 **/

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
