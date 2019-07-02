#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints an Array
 * @a: Int
 * @n: Int
 * Return: void
 */

void print_array(int *a, int n)
{
	int j = 0;

	while (j < n - 1)
	{
		printf("%d, ", *(a + j));
		j++;
	}
	printf("%d\n", *(a + j));
}
