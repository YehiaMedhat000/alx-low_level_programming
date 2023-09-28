#include "main.h"

/**
 * aux_sqrt - Gets the square root of a number n by incrementing counter.
 * @counter: Integer.
 * @n: The number for which square root is needed.
 * Return: counter, Type integer.
 */

int aux_sqrt(int counter, int n)
{
	/* Base cases */
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}

	/* Implementation */
	else if (counter * counter == n)
	{
		return (counter);
	}
	else
	{
		return (aux_sqrt(counter + 1, n));
	}
}

/**
 * _sqrt_recursion - returns x raised to y.
 * @n: A positive integer.
 * Return: The non-negative root of n.
 */

int _sqrt_recursion(int n)
{
	return (aux_sqrt(1, n));
}
