#include <string.h>
#include "main.h"

/**
 * infinite_add - Adds the numric values from two integers
 * @n1: First string
 * @n2: Second string
 * @r: The buffer
 * @size_r: the buffer size
 * Return: Char pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, sum, tens, ones;
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	sum = 0, tens = 0, ones = 0;

	/* Check the buffer size is sufficient */
	if (len1 >= size_r || len2 >= size_r)
	{
		return (0);
	}

	while (n1[i] || n2[i])
	{
		/* Sum the values and get the ones and tens */
		sum = n1[i] + n2[i] - 96;
		tens += sum / 10;
		ones += sum % 10;

		/* Increment the ones of the current position */
		r[i] = ones + 48;
		ones = 0;
		sum = 0;

		/* set tens to be put as ones in the next iteration */
		if (tens)
		{
			sum = tens;
		}
	}

	return (r);
}
