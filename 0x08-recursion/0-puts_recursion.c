#include "main.h"

/**
 * _puts_recursion - Prints a string by recursion.
 * @s: Char pointer to the string.
 * Return: Nothing.
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
		return;

	_putchar(*s);
	_puts_recursion(s + 1);
}
