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
	unsigned int i;
	void *p;

	if ((p = malloc(new_size)) == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			*((int *)p + i) = *((int *)ptr + i);
	}

	else if (new_size == old_size)
		return (ptr);

	else if (ptr == NULL)
		return (p);

	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		for (i = 0; i < new_size; i++)
			*((int *)p + i) = *((int *)ptr + i);
	}
	free(ptr);
	return (p);
}

