#include "sort.h"

/**
 * check_reverse - Checks values backwards from position
 * @array: Array
 * @position: Position to start
 * @knuth: Knuth sucesion value
 * Return: Nothing
 */

void check_reverse(int *array, unsigned int position, unsigned int knuth)
{
	int i, value_ch = 0, check = 1;

	for (i = position; i >= 0; i--)
	{
		if (check)
		{
			if (array[i - knuth] == array[0])
				check = 0;
			if (array[i] < array[i - knuth])
			{
				value_ch = array[i];
				array[i] = array[i - knuth];
				array[i - knuth] = value_ch;
			}
		}
	}
}

/**
 * shell_sort - Shell sort algorithm
 * @array: Array
 * @size: Array's sort
 * Return: Nothing
 */

void shell_sort(int *array, size_t size)
{
	unsigned int knuth = 0, i, j, h, counter = 0;
	int value_ch = 0, arr_knuth[999];

	for (i = 0; knuth * (i + i) < size; i++)
	{
		knuth = (knuth * 3) + 1;
		arr_knuth[i] = knuth;
	};

	for (j = 0; j < i; j++)
	{
		for (h = 0; h < size; h++)
		{
			if ((knuth + h) <=  size - 1)
			{
				if ((knuth + h) >= size / 2)
				{
					check_reverse(array, (knuth + h), knuth);
				}
				else if (array[h] > array[knuth + h])
				{
					value_ch = array[knuth + h];
					array[knuth + h] = array[h];
					array[h] = value_ch;
				}
			}
		}
		print_array(array, size);
		knuth = arr_knuth[i - 2];
	}
}
