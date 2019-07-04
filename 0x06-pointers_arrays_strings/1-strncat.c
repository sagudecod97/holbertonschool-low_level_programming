#include "holberton.h"

/**
 * *_strncat - Concatenates a string until n
 * @dest: Destination string.
 * @src: Source string.
 * @n: Limit of concatenation.
 * Return: Concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int ldest = 0, j;

	while (dest[ldest] != '\0')
	{
		ldest++;
	}
	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
			break;

		dest[ldest] = src[j];
		ldest++;
	};

	return (dest);
}
