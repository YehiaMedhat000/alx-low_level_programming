#include "main.h"
/**
 * print_line - prints _ n times followed by \n
 * if n is 0 or less it prints \n only
 * @n: type int
 *
 * Return: None, void
 */

void print_line(int n)
{
	int i;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
