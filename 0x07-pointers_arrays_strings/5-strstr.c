#include <string.h>
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
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
