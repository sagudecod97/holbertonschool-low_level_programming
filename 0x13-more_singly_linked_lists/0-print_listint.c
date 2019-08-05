#include "lists.h"

/**
 * print_listint - Function that prints all the elements
 * @h: Header
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != '\0'; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	};

	return (i);
}
