#include  "holberton.h"

/**
 * string_toupper - Makes any lowercase to uppercase
 * @s: String
 * Return: Modified string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = (s[i] - 32);
		}
		i++;

	}
	return (s);
}
