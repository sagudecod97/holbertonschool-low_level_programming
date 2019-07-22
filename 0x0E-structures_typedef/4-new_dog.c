#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *new_dog - Function that creates a new dog.
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: A new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *pn, *po;
	int i = 0, j = 0, k;

	ptr = malloc(sizeof(struct dog));

	if (ptr == NULL)
	{
		return (NULL);
	};
	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	pn = malloc(sizeof(char) * (i + 1));
	if (pn == NULL)
	{
		free(pn);
		free(ptr);
		return (NULL);
	};
	po = malloc(sizeof(char) * (j + 1));
	if (po == NULL)
	{
		free(po);
		free(pn);
		free(ptr);
		return (NULL);
	};
	for (k = 0; k <= i; k++)
		pn[k] = name[k];
	for (k = 0; k <= j; k++)
		po[k] = owner[k];
	ptr->name = pn;
	ptr->age = age;
	ptr->owner = po;
	return (ptr);
}
