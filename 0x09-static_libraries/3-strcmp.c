#include <string.h>
#include "main.h"

/**
 * _strcmp - compares two strings by ascii values
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: integer of the difference in the
 * first value of difference
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (len1 > len2)
	{
		for (i = 0; i < len1; i++)
		{
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
		}
	}

	else
	{
		for (i = 0; i < len2; i++)
		{
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
		}
	}

	return (0);
}
