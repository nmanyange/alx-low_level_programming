#include "hash_tables.h"

/**
 * hash_table_set -  adds an element to the hash table
 * @ht:  is the hash table to be updated
 * @key: contains the value
 * @value: value of the key
 * Return: 1 on success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	hash_table_t *new_node = malloc(sizeof(hash_table_t));

	if (!new_node)
		return (0);

	if (value != NULL)
	{
		new_node->value = strdup(value);
		if (!new_node->value)
		{
			free(new_node);
			return (0);
		}
	}
	else
	{
		new_node->value = strdup("");
		if (!new_node->value)
		{
			free(new_node);
			return (0);
		}
	}
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
