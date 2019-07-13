#include "holberton.h"

/**
 * factorial - Gives the factorial of a number
 * @n: Number
 * Return: The result
 */

int factorial(int n)
{
	int result;

	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}

	result = n * factorial(n - 1);

	return (result);
}
