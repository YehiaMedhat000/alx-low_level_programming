#include "main.h"

/**
 * _strstr - Locates a substring needle in the haystack
 * @haystack: Pointer to the string
 * @needle: The string to find in s
 * Return: Pointer for the first occurrance of any
 * char in needle in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i])
	{
		j = 0;

		while (needle[j])
		{
			if (haystack[i] == needle[j])
			{
				return (haystack + i);
			}

			j++;

		} 
		i++;

	}
	return (NULL);
}
