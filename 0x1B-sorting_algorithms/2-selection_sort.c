#include "sort.h"

/**
 * selection_sort - Selection sort algorithm
 * @array: Array of Ints
 * @size: Array's size
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, h, pos = 0, change;
	int value_1 = 0, value_2 = 0, breaker;

	for (i = 0; i < size; i++)
	{
		h = 0;
		change = 0;
		value_2 = array[i];
		for (j = i; j < size; j++)
		{
			if (value_2 > array[j])
			{
				value_2 = array[j];
				pos = j;
				change = 1;
			}
		};
		for (; array[h]; h++)
		{
			if ((h == (size - 1)) && array[h] > array[h - 1])
			{
				breaker = 1;
				break;
			}
			if (array[h] < array[h + 1])
				continue;
			else
				break;
		}
		if (breaker == 1)
			break;
		if (change == 1)
		{
			value_1 = array[i];
			array[i] = value_2;
			array[pos] = value_1;
			print_array(array, size);
		}
	}
}