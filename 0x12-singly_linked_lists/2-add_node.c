#include "lists.h"
#include <string.h>

/**
 * *add_node - Function that adds a new node
 * @head: The head of the list
 * @str: String
 * Return: Addres of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	int i = 0;

	while (str[i] != '\0')
		i++;

	if (head == NULL)
		return (NULL);

	temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->len = i;

	temp->str = strdup(str);

	temp->next = (*head);

	*head = temp;

	return (temp);
}
