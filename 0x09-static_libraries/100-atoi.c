#include "holberton.h"

/**
 * _atoi - Function that convert a string to an integer.
 * @s: String
 * Return: Integer
 */

int _atoi(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
