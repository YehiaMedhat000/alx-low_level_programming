#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: type int
 * Return: Always 0 (success)
 */

int print_last_digit(int n)
{
	_putchar(48 + n % 10);
	return (48 + n % 10);
}

