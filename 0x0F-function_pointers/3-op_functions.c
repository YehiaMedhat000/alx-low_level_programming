#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The sum of the two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two numbers
 * @a: The first number
 * @b: The second number
 * Return: The difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: The first number
 * @b: The second number
 * Return: The multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a: The first number
 * @b: The second number
 * Return: The division of a over b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Get the remaider
 * of the division of a and b
 * @a: The first number
 * @b: The second number
 * Return: The remainder of a over b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
