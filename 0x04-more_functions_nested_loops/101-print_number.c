#include "main.h"

/**
 * print_number - prints a number
 * @n: type int
 * Return: None, void
 */

void print_number(int n)
{
	int i, j;
	int d = 0, t = 10;

	for (i = 1; i < n; i *= 10)
	{
		if (n / i == 0)
		{
			break;
		}
		d++;
	}

	for (i = 1; i <= d; i++)
	{
		for (j = 0; j < d - i; j++)
		{
			t *= 10;
		}
		_putchar('0' + n / t);
	}
}
