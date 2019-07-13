#include "holberton.h"

/**
 * *rot13 - Encodes a string with rot13
 * @s: String to encode.
 * Return: The string encoded
 */

char *rot13(char *s)
{
	char inChar[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char outChar[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; j <= 52; j++)
		{
			if (s[i] == inChar[j])
			{
				s[i] = outChar[j];
				break;
			}
		}
		i++;
	};

	return (s);
}
