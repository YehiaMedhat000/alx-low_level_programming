#include <string.h>
#include "main.h"

/**
 * print_array - prints n elements from an array
 * separated by `, ` followed by a new line
 * @str: pointer to the first element of the array
 * Return: Nothing, void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
