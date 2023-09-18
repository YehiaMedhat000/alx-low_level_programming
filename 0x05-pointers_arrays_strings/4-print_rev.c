#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the first element of the array
 * Return: Nothing, void
 */
void print_rev(char *s)
{
	int i;
	int len = _strlen(s);

	for (i = len; i > 1; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
