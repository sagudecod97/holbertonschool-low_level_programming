#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - Function that creates an array of chars.
 * @size: Size of array.
 * @c: Character
 * Return: Array of Chars.
 */

char *create_array(unsigned int size, char c)
{
	char *parr = (char *)malloc(size * sizeof(char));

	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	} else if (parr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		parr[i] = c;
	};

	return (parr);
}
