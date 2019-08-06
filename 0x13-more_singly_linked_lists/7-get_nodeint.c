#include "lists.h"

/**
 * *get_nodeint_at_index - Function that returns the nth node
 * @head: Head
 * @index: Nth node wanted
 * Return: Nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, counter = 0;

	listint_t *node;
	listint_t *tmp;

	if (head == NULL)
	{
		return (NULL);
	}

	tmp = head;

	while (tmp->next != NULL)
	{
		counter++;
		tmp = tmp->next;
	};

	if (counter < index)
		return (NULL);

	tmp = head;

	for (i = 0; i <= counter; i++)
	{
		if (i == index)
		{
			node = tmp;
			return (node);
		} else if (i <= counter)
			tmp = tmp->next;
	}

	return (NULL);
}
