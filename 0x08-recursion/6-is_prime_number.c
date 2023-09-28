#include "main.h"

/**
 * fact - returns the factorial of a given integer.
 * @n: The given integer.
 * Return: Integer result of the factorial.
 */

int fact(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * fact(n - 1));
}

/**
 * is_prime_number - Checks if n is prime.
 * @n: A positive integer.
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	int f = fact(n - 1);

	if ((f % n) == (n - 1))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
