#include "main.h"
/**
 * print_times_table - prints some word
 * Return: None, void
 */

void print_times_table(int n)
{
	int i;
	int j;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		_putchar('0');

		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
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

