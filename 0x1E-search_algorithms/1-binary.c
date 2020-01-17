#include "search_algos.h"

/**
 * print_arr - Prints an array
 * @array: Array to print
 * @size: Array's size
 * @pos: First position to print
 * Return: Nothing
 **/

void print_arr(int *array, unsigned int size, int pos)
{
	unsigned int i;

	if (pos == (int)size)
		return;

	printf("Searching in array: ");
	for (i = pos; i < size; i++)
	{
		if (i == (size - 1))
			printf("%i", array[i]);
		else
			printf("%i, ", array[i]);
	};
	printf("\n");
}

/**
 * binary_search - Search for a value using Binary search
 * @array: Array of ints
 * @size: Array's size
 * @value: Value to search
 * Return: Index where found, -1 if its not present
 **/

int binary_search(int *array, size_t size, int value)
{
	unsigned int i, new_size = size;
	int lowest = 0, highest = size - 1, mid = 0;

	if (array == NULL)
		return (-1);

	if (size % 2 == 0)
		mid = (size - 1) / 2;
	else
		mid = size / 2;

	print_arr(array, size, 0);

	for (i = 0; new_size > 0; i++)
	{
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
		{
			highest = mid - 1;
			new_size = highest + 1;
		}
		else
		{
			lowest = mid + 1;
			new_size = highest + 1;
		}
		mid = (lowest + highest) / 2;
		print_arr(array, new_size, lowest);
		if (i == 2)
			break;
	};

	return (-1);
}
