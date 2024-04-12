#include "hash_tables.h"

/**
 * hash_table_get - Gets the value of some node
 * in the table where the key is key
 * @ht: The hash table to be used
 * @key: The key value of the node
 * Return: The value of the node
 * NULL if key isn't found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	node = ht->array[idx];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
