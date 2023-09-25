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

	if (!strlen(needle))
	{
		return (haystack);
	}
	/* Get the index of first occurrance */
	while (*haystack)
	{
		if (*needle == *haystack)
		{
			i = 0;

			while (needle[i])
			{

				/* Check needle matching haystack from i */
				if (*(needle + i) != *(haystack + i))
					break;

				i++;
			}
			if (!needle[i])
			{
				printf("quitted inner loop and return hay is done\n");
				return (haystack);
			}
		}
		haystack++;
	}

	return (NULL);
}
