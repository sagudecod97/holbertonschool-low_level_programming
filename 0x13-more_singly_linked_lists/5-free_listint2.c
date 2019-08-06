#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list
 * @head: Head
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmpFree;
	listint_t *node;

	if (head == NULL || *head == NULL)
		return;

	tmpFree = *head;

	while (tmpFree != NULL)
	{
		node = tmpFree->next;
		tmpFree->next = NULL;
		free(tmpFree);
		tmpFree = node;
	};

	*head = NULL;
}
