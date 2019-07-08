#include "holberton.h"
#include <stdio.h>

/**
 * *_strchr - Function that find a character in a string
 * @s: String
 * @c: Character to find
 * Return: Returns the first ocurrence of the character.
 */

char *_strchr(char *s, char c)
{
	int i = 0, n = 0;

	char * position;

	while (s[n] !=  '\0')
	{
		n++;
	}
	
	while (i < n)
	{
		if (s[i] == c)
		{
			position = s + i;
			break;
		}
		i++;
	}

	return (position);
}
