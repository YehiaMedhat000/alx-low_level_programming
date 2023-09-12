#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: type int
 * Return: Always 0 (success)
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld *= -1;
		_putchar(48 + ld);
		return (ld);
	}
	_putchar(48 + ld);
	return (ld);
}

