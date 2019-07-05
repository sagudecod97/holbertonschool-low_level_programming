#include "holberton.h"

/**
 * *leet - Encodes a string into 1337
 * @s: String to encode.
 * Return: String encoded.
 */

char *leet(char *s)
{
	char alpha[] = "AaEeOoTtLl";

	char num[] = "4433007711";

	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; j <= 10; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = num[j];
			}
		}
		i++;
	}
	return (s);
}
