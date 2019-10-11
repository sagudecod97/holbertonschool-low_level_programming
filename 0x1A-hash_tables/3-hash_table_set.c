#include "hash_tables.h"

/**
 * add_node - Adds a node
 * @head: Array
 * @str: String to pass
 * @key: Key
 * Return: Pointer to node
 */

hash_node_t *add_node(hash_node_t **head, const char *str, const char *key)
{
	hash_node_t *tmp;

	if (head == NULL)
	{
		return (NULL);
	}

	tmp = *head;
	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->value = strdup(str);
	tmp->key = strdup(key);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash Table
 * @key: Key
 * @value: Value to add
 * Return: 1 on Success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	int flag = 0;
	hash_node_t *tmp;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];

	if (tmp == NULL)
	{
		if (add_node(&(ht->array[index]), value, key) == NULL)
			return (0);
	} else
	{
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				tmp->value = strdup(value);
				flag = 1;
			}
			tmp = tmp->next;
		}
		if (flag == 0)
		{
			if (add_node(&(ht->array[index]), value, key) == NULL)
				return (0);
		}
	}
	return (1);
}
