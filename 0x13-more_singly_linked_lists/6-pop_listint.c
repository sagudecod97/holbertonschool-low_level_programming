#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Function that deletes the head node
 * @head: Head
 * Return: Node's data(n)
 */

int pop_listint(listint_t **head)
{
	int n = 0;

	listint_t *node;

	if (head == NULL)
		return (0);

	n = (*head)->n;

	node = (*head)->next;

	free(*head);

	*head = node;

	return (n);
}
