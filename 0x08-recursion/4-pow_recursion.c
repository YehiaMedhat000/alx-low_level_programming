#include "main.h"

/**
 * _pow_recursion - returns x raised to y.
 * @x: The base.
 * @y: The power.
 * Return: Integer result of the exponentiation.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	if (y == 1)
	{
		return (x);
	}


	return x * (_pow_recursion(x, y - 1));
}
