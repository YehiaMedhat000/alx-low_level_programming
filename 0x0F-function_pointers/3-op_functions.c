#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - Adds two integers
 * @a: First int
 * @b: second int
 * Return: Addition of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: First int
 * @b: second int
 * Return: Difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: First int
 * @b: second int
 * Return: Multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: First int
 * @b: second int
 * Return: Division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulus of two integers
 * @a: First int
 * @b: second int
 * Return: Remainder of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
