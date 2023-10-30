#include "main.h"

/**
 * _strlen - Gets the length of a string array
 * @s: pointer to the first element of the array
 * Return: the length of the string, type int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}

	return (i);
}
