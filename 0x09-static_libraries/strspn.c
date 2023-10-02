#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string
 * @accept: The string to find in s
 * Return: Number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;

	while (accept[i])
	{
		if (s[j] == accept[i])
		{
			j++;
			i = 0;
			continue;
		}
		i++;
	}
	return (j);
}
