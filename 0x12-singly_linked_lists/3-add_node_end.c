#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *add_node_end - Function that adds a new node at the end
 * @head: Pointer to first element
 * @str: String
 * Return: Addres of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;

	list_t *node;

	int i = 0;

	tmp = *head;
	node = (list_t *)malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	node->str = strdup(str);
	node->len = i;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = node;

	return (*head);
}
