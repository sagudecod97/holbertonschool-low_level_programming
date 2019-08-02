#include "lists.h"

/**
 * free_list - Free allocated memory
 * @head: Pointer to first element
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	list_t *node;

	tmp = head;

	while (tmp != NULL)
	{
		node = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = node;
	};

	head = NULL;
}
