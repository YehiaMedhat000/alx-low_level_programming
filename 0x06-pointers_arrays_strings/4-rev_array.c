#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: pointer of the 1st integer
 * @b: pointer of the 2nd integer
 *
 * Return: Nothing, void
 */

void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/**
 * _strcmp - compares two strings by ascii values
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: integer of the difference in the
 * first value of difference
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		swap_int(&a[i], &a[n - i - 1]);
	}
}
