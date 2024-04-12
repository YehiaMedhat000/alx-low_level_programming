#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * and its contents by freeing the memory
 * allocated for it
 * @ht: The hash table to be used
 * Return: Nothing (void)
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *first = ht;
	hash_node_t *elem, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			elem = ht->array[i];
			while (elem != NULL)
			{
				temp = elem->next;
				free(elem->key);
				free(elem->value);
				free(elem);
				elem = temp;
			}
		}
	}
	free(first->array);
	free(first);
}
