#include "holberton.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: String
 * @accept: String to get bytes
 * Return: Unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0, j, i, c = 0;

	while (accept[n] != '\0')
	{
		n++;
	}

	for (j = 0; j <= n; j++)
	{
		for (i = 0; i <= n; i++)
		{
			if (accept[j] == s[i])
			{
				c++;
			}
		}
	}
	return (c);
}
