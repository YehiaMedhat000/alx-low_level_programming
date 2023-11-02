#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory block previously allocated
 * @old_size: The size of the memory block previously allocated
 * @new_size: The size of the memory to reallocate
 * Return: Pointer to the newly allocated memory, NULL in case of fail
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if ((new_size > old_size) || (ptr == NULL))
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}

