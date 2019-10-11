#include "hash_tables.h"

/**
 * hash_table_create - Created a hash table
 * @size: Size of the table
 * Return: Pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_arr = malloc(sizeof(hash_table_t));

	if (hash_arr == NULL)
	{
		free(hash_arr);
		return (NULL);
	}

	return (hash_arr);
}
