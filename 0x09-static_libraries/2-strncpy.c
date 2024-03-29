#include <string.h>
#include "main.h"

/**
 * _strncpy - copies n chars from a string to another string
 *
 * @src: pointer to the first element of the source array
 * @dest: pointer to the first element of the destination array
 * @n: number of chars to copy to dest from src
 *
 * Return: char pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}

	return (dest);
}
