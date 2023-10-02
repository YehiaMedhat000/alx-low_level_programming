#include "main.h"

/**
 * _memcpy - Fills memory with a constant byte.
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source buffer
 * @n: The number of bytes to copy
 * Return: Char pointer to the destination buffer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
