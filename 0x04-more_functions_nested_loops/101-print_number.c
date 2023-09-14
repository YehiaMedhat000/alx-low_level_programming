#include "main.h"

/**
 * print_number - prints a number
 * @n: type int
 * Return: None, void
 */

void print_number(int n)
{
	int i;
	int d = 0;

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
		_putchar('0' + n / 10 ** (d - i));
	}
}
