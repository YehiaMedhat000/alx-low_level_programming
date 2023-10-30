#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array
 * @size: Size of the array
 * @c: Filling character for the buffer
 * Return: Pointer to the array, or NULL if size is 0 or in case of failure
 */

char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(size);

	if (size == 0)
		return (NULL);
	else if (p == NULL)
		return (NULL);

	for (; size > 0 ; size -= 1)
	{
		p[size - 1] = c;
	}

	return (p);
}

