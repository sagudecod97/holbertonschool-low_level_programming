#include "holberton.h"

/**
 * _islower - checks for a lowercase character
 * @c: int Character to check
 * Return: 0
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)

		return (1);
	else
		return (0);
}
