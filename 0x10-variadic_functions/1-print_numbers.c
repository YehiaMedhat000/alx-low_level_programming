#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * Followed by a new line
 *
 * @separator: The character to print
 * between numbers
 *
 * @n: The number of integers passed
 * to the functions
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list params;

	va_start(params, n);

	for (i = 0; (unsigned int)i < n; i++)
	{
		printf("%d", va_arg(params, int));
		if ((unsigned int)i != n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(params);
	printf("\n");
}
