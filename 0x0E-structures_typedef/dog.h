#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Structure of a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Structure of the simplest data from any kind of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struc dog - Typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
