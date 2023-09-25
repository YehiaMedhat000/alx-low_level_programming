#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: Pointer to the string
 * @c: The char to locate
 * Return: Pointer to the 1st occurrance of the char c,
 * if c isn't found returns NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
