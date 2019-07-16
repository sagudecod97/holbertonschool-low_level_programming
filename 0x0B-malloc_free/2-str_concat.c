#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - Function that concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * Return: A concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, h, k;

	char *pstr;

	while (s1[i] != '\0')
	{
		i++;
	};
	while (s2[j] != '\0')
	{
		j++;
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	pstr = (char *)malloc(sizeof(char) * (i + j + 1));

	if (pstr == NULL)
	{
		return (NULL);
	}

	for (h = 0; h < i; h++)
	{
		pstr[h] = s1[h];
	};
	for (k = 0; k <= j; k++)
	{
		pstr[h] = s2[k];
		h++;
	}
	return (pstr);
}
