#include <string.h>
#include "main.h"

/**
 * puts2 - prints chars with even index a string followed by a new line
 * @str: pointer to the first element of the array
 * Return: Nothing, void
 */

void puts2(char *str)
{
	int i;
	int len = strlen(str);

	printf("%d\n", len);
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
