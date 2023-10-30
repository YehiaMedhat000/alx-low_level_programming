#include <string.h>
#include "main.h"

/**
 * _strcpy - copies a string including the `\0` char
 * @src: pointer to the first element of the source array
 * @dest: pointer to the first element of the destination array
 * Return: char array
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len = strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
