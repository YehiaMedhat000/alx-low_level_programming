#include "hash_tables.h"

/**
 * hash_table_print - Prints the node contents
 * of the table ht
 * @ht: The hash table to be printed
 * Return: Nothing (void)
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node;
	char *ptr = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	while (index < ht->size)
	{
		node = ((ht->array)[index]);
		while (node)
		{
			printf("%s'%s': '%s'", ptr, node->key, node->value);
			ptr = ", ";
			node = node->next;
		}
		index++;
	}
	puts("}");
}
