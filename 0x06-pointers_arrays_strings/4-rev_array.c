#include "holberton.h"

/**
 * reverse_array - Reverse an Array
 * @a: Array of integers
 * @n: Number of element of the array
 * Return: Reversed Array
 */

void reverse_array(int *a, int n)
{
	int rev[999];

	int i = 0, j;

	while (i <= n)
	{
		rev[i] = a[n - i - 1];
		i++;
	}
	for (j = 0; j < n; j++)
	{
		a[j] = rev[j];
	}
}
