#include "main.h"

/**
 * factorial - returns the factorial of a given integer.
 * @n: The given integer.
 * Return: Integer result of the factorial.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
