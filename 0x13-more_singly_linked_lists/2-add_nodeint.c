#include "lists.h"

/**
 * *add_nodeint - Function that adds a new node at the beginning
 * @head: Head
 * @n: Element
 * Return: Nothing
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	if (head == NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
		*head = newNode;
		return (*head);
	};

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
