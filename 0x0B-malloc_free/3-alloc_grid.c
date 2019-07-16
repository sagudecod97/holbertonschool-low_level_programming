#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - Function returns a pointer.
 * @width: Width of Array
 * @height: Heigth of Array
 * Return: Pointer
 */

int **alloc_grid(int width, int height)
{
	int **pint = (int **)malloc(height * sizeof(int));

	int i, j, h, zero = 0;

	if ((width <= 0) | (height <= 0) | (pint == NULL))
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		pint[i] = (int *)malloc(width * sizeof(int));
	}

	for (h = 0; h < height; h++)
	{
		for (j = 0; j < width; j++)
		{
			pint[h][j] = zero;
		}
	}

	return (pint);
}