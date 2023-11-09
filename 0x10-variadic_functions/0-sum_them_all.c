#include "variadic_functions.h"

/**
 * sum_them_all - Adds all its params
 * @n: Number of params
 * Return: The summation
 * if n == 0, returns 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = 0;
	va_list params;

	if (n == 0)
		return (0);

	va_start(params, n);
	
	for (i = 0; (unsigned int)i < n; i++)
		sum += va_arg(params, int);

	va_end(params);

	return (sum);

}
