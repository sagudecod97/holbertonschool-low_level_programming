#include "holberton.h"

/**
 * *_memcpy - Function that copies a memory area
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Limit of area to copy
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
