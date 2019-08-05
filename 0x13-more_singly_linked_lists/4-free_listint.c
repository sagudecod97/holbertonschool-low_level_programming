#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list
 * @head : Head
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmpFree;

	listint_t *nodeFree;

	tmpFree = head;

	while (tmpFree != NULL)
	{
		nodeFree = tmpFree->next;
		free(tmpFree);
		tmpFree = nodeFree;
	};

	head = NULL;
}
