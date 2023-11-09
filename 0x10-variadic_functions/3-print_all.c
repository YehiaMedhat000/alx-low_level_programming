#include "variadic_functions.h"

/**
 * format_char - Formats characters
 * @sep: Separator of the strings
 * @va_list: The character passed
 * Return: Nothing
 */

void format_char(char *sep, va_list ap)
{
	printf("%s%c", sep, va_arg(ap, int));
}

/**
 * format_int - Formats integer
 * @sep: Separator of the integers
 * @va_list: The integer passed
 * Return: Nothing
 */

void format_int(char *sep, va_list ap)
{
	printf("%s%d", sep, va_arg(ap, int));
}

/**
 * format_float - Formats floats
 * @sep: Separator of the floats
 * @va_list: The floats passed
 * Return: Nothing
 */

void format_float(char *sep, va_list ap)
{
	printf("%s%f", sep, va_arg(ap, double));
}

/**
 * format_string - Formats strings
 * @sep: Separator of the strings
 * @va_list: The strings passed
 * Return: Nothing
 */

void format_string(char *sep, va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str)
	{
		printf("%s%s", sep, va_arg(ap, char *));
	}
	else
	{
		printf("nil");
	}
}

/**
 * print_all - Prints anything
 * @format: String with formats for
 * the strings printed
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list(params);

	token_t tokens[] = {
		{"c", format_char},
		{"s", format_string},
		{"i", format_int},
		{"f", format_float},
		{NULL, NULL}
	};

	va_start(params, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (tokens[j].token[0] == format[i])
				tokens[i].f(", ", params);
			j++;
		}
		i++;
	}
}
