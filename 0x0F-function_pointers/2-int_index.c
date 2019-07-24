#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: Array
 * @size: Size of array
 * @cmp:Callback
 * Return: Integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0)
	{
		return (-1);
	};

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			result = i;

			return (result);
		};
	};

	return (-1);

}
