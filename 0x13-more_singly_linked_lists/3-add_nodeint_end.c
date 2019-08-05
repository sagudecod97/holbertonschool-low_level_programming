#include "lists.h"

/**
 * *add_nodeint_end - Function that adds a new node at the end
 * @head: Head
 * @n: Element
 * Return: Nothing
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;

	listint_t *tmpNode;

	tmpNode = *head;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	};

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	};

	while(tmpNode->next != NULL)
	{
		tmpNode = tmpNode->next;
	};

	newNode->n = n;
	newNode->next = NULL;
	tmpNode->next = newNode;


	return (*head);	
}
