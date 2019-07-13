#include "holberton.h"

/**
 * _isdigit - Returns if a int is a number or not.
 * @c: Int to test
 * Return: 1 Positive 0 Negative
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	};

	return (0);
}
