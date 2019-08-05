#include "lists.h"

/**
 * listint_len - Function that returns the number of elements
 * @h: Head
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != '\0'; i++)
	{
		h = h->next;
	};

	return (i);
}
