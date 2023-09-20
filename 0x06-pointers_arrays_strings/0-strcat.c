#include <string.h>
#include "main.h"

/**
 * _strcat: Write a function that concatenates two strings
 * @src: the string to concatenate
 * @dest: the string to be concatenated to src
 * Return: pointer of type char
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
