#include "main.h"
/**
 * print_most_numbers - prints 0-9 
 * without 2,4 followed by \n
 *
 * Return: None, void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
