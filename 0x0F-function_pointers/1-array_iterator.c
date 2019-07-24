#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - Function that executes a function given as a parameter
 * @array: Array
 * @size: size of array
 * @action: Callback
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == NULL || action == NULL)
	{
		return;
	};

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	};
}

