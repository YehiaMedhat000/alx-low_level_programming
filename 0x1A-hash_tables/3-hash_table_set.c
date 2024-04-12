#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the table
 * @ht: The hast table to add to
 * @key: The key value of the element
 * @value: The numeric value of the element
 * Return: 1 in success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int idx, j;

	if (!key || !ht || !*key || !value)
		return (0);

	cpy = strdup(value);
	if (!cpy)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (j = 0; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = cpy;
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(cpy);
		return (0);
	}
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->value = cpy;
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
