#include "holberton.h"

/**
 * _isupper - Function will check is "c" is Uppercasse.
 * @c: Character in int to test.
 * Return: 1 Uppercase 0 Otherwise.
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	};

	return (0);
}
