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
	int i = 0, j = 0;

	/* Get the index of first occurrance */
	while (haystack[i])
	{
		if (needle[0] == haystack[i])
		{
			break;
		}
		i++;
	}

	while (needle[j])
	{
		if (haystack[i + j] != needle[j])
		{
			return (NULL);
		}
		j++;
	}
	return (haystack + i);
}
