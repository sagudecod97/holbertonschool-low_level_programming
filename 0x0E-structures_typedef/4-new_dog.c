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
	int i = 0, j = 0;

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

	newDog.name = malloc(i * sizeof(char));

	if (newDog.name == NULL)
	{
		return (NULL);
	};

	newDog.owner = malloc(j * sizeof(char));

	if (newDog.owner == NULL)
	{
		return (NULL);
	};

	newDog.name = name;

	newDog.age = age;

	newDog.owner = owner;

	ptr = &newDog;

	return (ptr);
}
