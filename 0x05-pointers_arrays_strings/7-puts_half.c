#include <string.h>
#include "main.h"

/**
 * puts_half - prints the half of a string followed by a new line
 * @str: pointer to the first element of the array
 * Return: Nothing, void
 */

void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}

	else
	{
		for (i = 1 + (len - 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
