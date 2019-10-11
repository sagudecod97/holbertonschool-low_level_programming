#include "hash_tables.h"

/**
 * key_index - Gives the Index of a key
 * @key: Key
 * @size: Table's size
 * Return: The index of array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int indexHash = 0, index = 0;

	indexHash = hash_djb2(key);

	index = indexHash % size;

	return (index);
}
