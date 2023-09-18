#include <string.h>
#include "main.h"

/**
 * print_array - prints n elements from an array
 * separated by `, ` followed by a new line
 * @a: pointer to the first element of the array
 * @n: the number of element to print
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
	printf("\n");
}
