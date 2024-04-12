#include "hash_tables.h"

/**
 * key_index - Gets the index of the value
 * @key: The key value
 * @size: The size of the table
 * Return: Index integer
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
