#include "holberton.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: Number to raise.
 * @y: The power.
 * Return: Number
 */

int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}
	result = x * _pow_recursion(x, y - 1);
	return (result);
}
