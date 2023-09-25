#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sums of the diagonals
 * for a square matrix
 * @a: Char pointer for the first subarray
 * @size: size of the matrix
 * Return: Nothing, void
 */

void print_diagsums(int *a, int size)
{
	int i, sum_main = 0, sum_other = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		printf("first loop: %d\n", *(a + i));
		sum_main += *(a + i);
	}
	for (i = (size * size) - size; i > 0; i -= size - 1)
	{
		printf("second loop: %d\n", *(a + i));
		sum_other += *(a + i);
	}

	printf("%d, %d\n", sum_main, sum_other);
}
