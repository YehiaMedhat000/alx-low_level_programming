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
		for (j = 0; j <= 9; j++)
		{
			if (j != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(48 + (i * j) / 10);
			_putchar(48 + (i * j) % 10);
			if (j != 9)
			{
				_putchar(',');
			}
		}

		_putchar('\n');
	}
}

