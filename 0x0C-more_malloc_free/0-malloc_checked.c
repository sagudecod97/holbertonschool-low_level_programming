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
	
	p  = (void *)malloc(b * sizeof(unsigned int));

	if (p == NULL)
	{
		free(p);
		exit(98);
	} else
	{
		return (p);
	}
}
