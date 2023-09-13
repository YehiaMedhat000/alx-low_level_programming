#include "main.h"
/**
 * print_times_table - prints some word
 * @n: parameter, type n
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
			int p = i * j;

			_putchar(',');
			_putchar(' ');
			if (p <= 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			if (p <= 99)
			{
				_putchar(' ');
				_putchar(48 + (p % 100) / 10);
			}
			if (p >= 100)
			{
				_putchar(48 + p / 100);
				_putchar(48 + (p % 100) / 10);
			}
			//if
			//	_putchar(48 + p / 10);

			_putchar(48 + p % 10);
		}
		_putchar('\n');
	}
}

