#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer of the 1st integer
 * @b: pointer of the 2nd integer
 * Return: Nothing, void
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
