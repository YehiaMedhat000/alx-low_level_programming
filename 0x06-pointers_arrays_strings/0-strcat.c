#include <string.h>
#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: char pointer to the dest string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len_src = strlen(src);
	int len_dest = strlen(dest);

	for (i = 0; i < len_src; i++)
	{
		*(dest + len_dest + i) = src[i];
		if (dest[i] == '\0')
		{
			break;
		}
	}
	return (dest);
}
