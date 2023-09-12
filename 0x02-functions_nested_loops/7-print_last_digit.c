#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: type int
 * Return: Always 0 (success)
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (n < 0)
	{
		ld *= -1;
	}
	_putchar(48 + n % 10);
	return (n % 10);
}

