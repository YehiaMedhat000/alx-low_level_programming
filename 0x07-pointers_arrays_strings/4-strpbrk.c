#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string
 * @accept: The string to find in s
 * Return: Number of bytes in the initial segment of s which
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	do
	{
		j = 0;
		do
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		while (accept[j]);
		i++;
	}
	while (s[i]);
	return (NULL);
}
