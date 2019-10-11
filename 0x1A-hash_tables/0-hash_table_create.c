#include "hash_tables.h"

/**
 * hash_table_create - Created a hash table
 * @size: Size of the table
 * Return: Pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table_create;

	if (size <= 0)
		return (NULL);

	table_create = malloc(sizeof(hash_table_t));

	if (table_create == NULL)
	{
		free(table_create);
		return (NULL);
	};

	table_create->size = size;
	table_create->array = calloc(size, sizeof(hash_node_t));

	if (table_create->array == NULL)
		return (NULL);

	return (table_create);
}
