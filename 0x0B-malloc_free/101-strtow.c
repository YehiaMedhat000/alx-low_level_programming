#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * CWords - Counts how many words in string
 * @str: the string of interest
 * Return: integer
 */

int CWords(char *str)
{
	int i = 0;
	int count = 0;

	while (*(str + i))
	{
		if (*(str + i) != ' ')
		{
			if (*(str + i + 1) == ' ' || *(str + i + 1) == 0)
				count += 1;
		}
		i++;
	}
	return (count);
}

/**
 * strtow - function that splits a string into words.
 * @str : pointer
 * Return: Char
 */

char **strtow(char *str)
{
	int i = 0, j = 0, k = 0;
	int len = 0, count = CWords(str);
	char **f, *col;

	if (!str || !*str)
		return (NULL);
	if (count == 0)
		return (NULL);
	count += 1;
	f = malloc(sizeof(char *) * count);
	if (!f)
		return (NULL);
	i = 0;
	while (*str)
	{
			while (*str == ' ' && *str)
				str++;
		len = 0;
			while (*(str + len) != ' ' && *(str + len))
				len += 1;
		len += 1;
		col = malloc(sizeof(char) * len);
		if (!col)
		{
			for (k = j - 1; k >= 0; k--)
				free(f[k]);
			free(f);
			return (NULL);
		}
		for (k = 0; k < (len - 1);  k++)	
			*(col + k) = *(str++);
		*(col + k) = '\0';
		*(f + j) = col;
		if (j < (count - 1))
			j++;
	}
	*(f + j) = NULL;
	return (f);
}
