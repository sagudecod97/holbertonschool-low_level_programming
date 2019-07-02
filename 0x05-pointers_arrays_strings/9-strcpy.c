#include "holberton.h"

/**
 * _strcpy - Copies one string to another
 * @dest: Destination string
 * @src: Source String
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0, j = 0;

	while (*(src + n) != '\0')
	{
		n++;
	};
	while (j <= n)
	{
		dest[j] = *(src + j);
		j++;
	}

	return (dest);
}
