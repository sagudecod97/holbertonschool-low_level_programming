#include "holberton.h"

/**
 * *_memset - Fills the memory with a constant byte.
 * @s: Area pointed to.
 * @b: Constants that will replace some memory.
 * @n: Limit to fill
 * Return: Will retrun the "s" modified
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b,
		i++;
	}
	return (s);
}
