#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *p = (char *)malloc(sizeof(str));
	int i;

	if (p == NULL)
		return (NULL);
	
	for (i = 0; str[i]; i++)
	{
		p[i] = str[i];
	}

	return (p);
}
