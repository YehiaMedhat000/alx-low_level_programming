#include "main.h"
/**
 * times_table - prints some word
 * Return: None, void
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + (i * j));
			if (j != 9)
			{
				_putchar(',');
			}
		}

		_putchar('\n');
	}
}

