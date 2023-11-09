#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * followed by a new line
 *
 * @separator: The string to be printed
 * between strings
 *
 * @n: The number of strings passed
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *str;
	va_list(params);

	va_start(params, n);

	for (i = 0; (unsigned int)i < n; i++)
	{
		str = va_arg(params, char *);
		if (!str)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}
		if (separator && (unsigned int)i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
