#include "holberton.h"

/**
 * swap_int - Swaps the value of two variables
 * @a: First pointer
 * @b: Second Pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;

	d = *b;

	*a = d;

	*b = c;
}
