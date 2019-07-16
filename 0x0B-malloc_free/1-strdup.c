#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - Returns a pointer to a newly allocated space in memory
 * @str: String to copy
 * Return: Pointer of string
 */

char *_strdup(char *str)
{
	unsigned int i = 0, j;

	char *pstr;

	if(str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	pstr = (char *)malloc((i + 1) * sizeof(char));

	if (pstr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		pstr[j] = str[j];
	};
	return (pstr);
}
