#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat - Function that concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes
 * Return: A char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	unsigned int i = 0, j = 0, h, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s2[j] != '\0')
		j++;
	while (s1[i] != '\0')
		i++;
	if (n <= j)
		j = n;

	p = malloc((i + j) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < i; h++)
		p[h] = s1[h];
	for (k = 0; k < n ; k++)
	{
		p[h] = s2[k];
		h++;
	}
	p[h] = '\0';

	return (p);
}

