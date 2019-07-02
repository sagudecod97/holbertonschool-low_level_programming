#include "holberton.h"

/**
 * rev_string - Reverse a string
 * @s: String to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int n = 0, j = 0, h = 0;

	char str[999];

	while (*(s + n) != '\0')
	{
		n++;
	}
	while (n > 0)
	{
		n--;
		*(str + j) = *(s + n);
		j++;
	}
	while (*(s + h) != '\0')
	{
		*(s + h) = str[h];
		h++;
	}

}
