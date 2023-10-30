#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *p; 
	int i;

	if (str == NULL)
		return (NULL);

	p = (char *)malloc(sizeof(str));

	if (p == NULL)
		return (NULL);

	for (i = 0; str[i] != 0; i++)
	{
		p[i] = str[i];
	}

	return (p);
}
