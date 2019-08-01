#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * print_list - Function that prints all the elements
 * @h: pointer to a Struct
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	int j = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			j++;
		} else
		{
			printf("[%i] %s\n", h->len, h->str);
			h = h->next;
			j++;
		};
	}

	return (j);
}
