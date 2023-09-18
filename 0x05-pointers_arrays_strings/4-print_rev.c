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

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the first element of the array
 * Return: Nothing, void
 */
void print_rev(char *s)
{
	int i;
	int len = _strlen(s);

	for (i = len; i > 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
