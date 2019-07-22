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
	int i = 0, j = 0, h, k;
	char *strcpn, *strcpo;
	dog_t newDog;
	dog_t *ptr;

	while (name[i] != '\0')
	{
		i++;
	};
	while (owner[j] != '\0')
	{
		j++;
	};

	strcpn = malloc(i * sizeof(char));

	if (newDog.name == NULL)
	{
		free(name);
		return (NULL);
	};

	strcpo = malloc(j * sizeof(char));

	if (newDog.owner == NULL)
	{
		free(owner);
		return (NULL);
	};
	for (h = 0; h <= i; h++)
		strcpn[h] = name[h];
	for (k = 0; k <= j; k++)
		strcpo[k] = owner[k];

	newDog.name = name;
	newDog.age = age;
	newDog.owner = owner;

	ptr = &newDog;

	return (ptr);
}
