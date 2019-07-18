#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - Function that allocates memory using malloc
 * @b: Unsigned int
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p  = malloc(b);

	if (p == NULL)
	{
		exit(98);
	} else
	{
		return (p);
	}
}
