#include "main.h"
/**
 * most_numbers - prints 0-14 ten lines followed by \n
 * Return: None, void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j > 9)
			{
				_putchar('1');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}

