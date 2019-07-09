#include "holberton.h"

/**
 * *_strstr - Function that locates a substring.
 * @haystack: String source
 * @needle: String to find
 * Return: Returns a pointer to the beginning of the string.
 */

char *_strstr(char *haystack, char *needle)
{
	int indexN = 0, j, i = 0, c = 0;


	while (needle[indexN] != '\0')
	{
		indexN++;
	}
	for (j = 0; haystack[j] != '\0' && c == 0; j++)
	{
		if (haystack[j] == needle[i])
		{
			while (haystack[j] == needle[i] && haystack[j] != '\0' && needle[i] != '\0')
			{
				j++;
				i++;
			}
			haystack = haystack + (j - (indexN));
			c = 1;
		}
	}
	return (haystack);
}
