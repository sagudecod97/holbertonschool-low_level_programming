#include "lists.h"

/**
 * *insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Head
 * @idx: Index
 * @n: Integer
 * Return: Addres
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0, i;
	listint_t *tmp, *tmp2, *node;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	if (idx == 0)
	{
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}
	tmp = *head;
	while (tmp != NULL)
	{
		counter++;
		tmp = tmp->next;
	};
	if (idx < counter)
	{
		tmp2 = (*head)->next;
		tmp = *head;
		for (i = 1; i <= idx; i++)
		{
			if (i == idx)
			{
				node->n = n;
				node->next = tmp2;
				tmp->next = node;
				return (*head);
			};
			tmp2 = tmp2->next;
			tmp = tmp->next;
		}
	}
	return (NULL);
}
