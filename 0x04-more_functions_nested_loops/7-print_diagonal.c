#include "main.h"
/**
 * print_diagonal - prints a diagonal line followed by \n
 * whose length is n, if n is 0 or less \n only printed
 * @n: int type
 * Return: None, void
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		for (j = 0 ; j < n; j++)
		{
			if (j == i)
			{
				_putchar('\\');
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
