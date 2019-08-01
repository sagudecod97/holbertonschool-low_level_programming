#include "lists.h"

/**
 * list_len - Function that returns the number of elements
 * @h: List
 * Return: The length
 */

size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	};
	return (counter);
}
