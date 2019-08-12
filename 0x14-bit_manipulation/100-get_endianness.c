#include "holberton.h"

/**
 * get_endianness - Function that checks the endianness
 *
 * Return: Nothing
 */

int get_endianness(void)
{
	 int num = 1;

	if (*(char *) &num == 1)
	{
		return (1);
	};

	return (0);

}
