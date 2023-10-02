#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the buffer
 * @b: Constant byte with which we fill the buffer
 * @n: The number of bytes to fill in the buffer
 * Return: Char pointer to the buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
