#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - adds or updates an element in a hash table
 * @ht: pointer to the hash table
 * @key: the key (cannot be empty)
 * @value: value associated with key (will be duplicated)
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *temp;
	char *val_copy;

	if (!ht || !key || !*key || !value)
		return (0);

	val_copy = strdup(value);
	if (!val_copy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (temp = ht->array[index]; temp; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = val_copy;
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(val_copy);
		return (0);
	}

	node->key = strdup(key);
	if (!node->key)
	{
		free(val_copy);
		free(node);
		return (0);
	}

	node->value = val_copy;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
