#include "main.h"

/**
 * _strlen_recursion - Prints a string in reverse.
 * @s: Char pointer.
 * Return: The length of s.
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
