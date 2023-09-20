#include <string.h>
#include "main.h"

/**
 * _strncat: Write a function that concatenates n chars from
 * a src string to a dest string.
 *
 * @src: the string to concatenate n chars from.
 * @dest: the string to be concatenated to src.
 * @n: number of chars to be concatenated from src to dest.
 *
 * Return: pointer of type char to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len_src = strlen(src);
	int len_dest = strlen(dest);

	if (n > len_src)
	{
		for (i = 0; i < len_src; i++)
		{
			*(dest + len_dest + i) = src[i];
		}
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			*(dest + len_dest + i) = src[i];
		}
		*(dest + len_dest + n) = '\0';
	}
	return (dest);
}
