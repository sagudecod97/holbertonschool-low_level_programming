#include "holberton.h"

/**
 * _strlen_recursion - Gives the string length
 * @s: String
 * Return: Length
 */

int _strlen_recursion(char *s)
{
	int result;

	if (*s == '\0')
	{
		return (0);
	}
	result = 1 + _strlen_recursion(s + 1);
	return (result);
}
