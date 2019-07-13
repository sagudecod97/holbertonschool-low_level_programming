#include "holberton.h"

/**
 * *_strpbrk - Function that searches a string for any of a set of bytes.
 * @s: String
 * @accept: String to test
 * Return: Returns a pointer to s.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, c = 0, j, a = 0;

	char *position;

	while (accept[i] != '\0')
	{
		i++;
	};

	for (j = 0; j <= i && c == 0; j++)
	{
		while (a <= i)
		{
			if (s[j] == accept[a])
			{
				c = 1;
				position = s + j;
				break;
			} 
			a++;
		}
		a = 0;
	};

	return (position);
}
