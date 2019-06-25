#include "holberton.h"

/**
 * _isalpha - return if a character is alpha or not
 * @c: character to check
 * Return: 1 or 0
 */

int _isalpha(int c)
{

	if (c >= 65 && c <=  90)
	{
		return (1);
	} else if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
