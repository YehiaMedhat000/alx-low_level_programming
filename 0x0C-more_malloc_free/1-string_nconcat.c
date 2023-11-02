#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of characters to take from s2
 * Return: Pointer to a newly allocated space to
 * the concatenated string, NULL if fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n > len2)
	{
		p = malloc(len1 + len2 + 1);
		if (p == NULL)
			return (NULL);

		for (i = 0; i < len1 ; i++)
		{
			p[i] = s1[i];
		}
		for (j = 0; j < len2 ; j++)
		{
			p[i + j] = s2[j];
		}
		p[len1 + len2 + 1] = '\0';
	}
	else
	{
		p = malloc(len1 + n + 1);
		if (p == NULL)
			return (NULL);

		for (i = 0; i < len1 ; i++)
		{
			p[i] = s1[i];
		}
		for (j = 0; j < n ; j++)
		{
			p[i + j] = s2[j];
		}
		p[i + j + 1] = '\0';
	}
	return (p);

}
