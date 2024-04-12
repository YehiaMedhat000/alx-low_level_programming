#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash_table
 * in the memory by malloc
 * @size: The size of the table to allocate
 * Return: Pointer to the hash_table allocated
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table || !size)
		return (NULL);

	table->size = size;
	table->array =  malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	while (size)
		table->array[size--] = NULL;

	return (table);
}

