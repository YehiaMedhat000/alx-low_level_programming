#include "main.h"
/**
 * times_table - prints some word
 * Return: None, void
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			if (i * j <= 9)
				_putchar(' ');
			else
				_putchar(48 + (i * j) / 10);

			_putchar(48 + (i * j) % 10);
		}

		_putchar('\n');
	}
}

