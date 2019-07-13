#include "holberton.h"

/**
 * _abs - Returns the value always positive
 * @n: Number to treat
 * Return: n
 */

int _abs(int n)
{

	if (n < 0)
	{
		int abs;

		abs = n * -1;
		return (abs);
	}
	return (n);
}
