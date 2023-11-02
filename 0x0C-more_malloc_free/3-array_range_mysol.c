#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Creates an array of integers
 * @min: The lower bound of the integers
 * @max: The upper bound of the integers
 * Return: Pointer to the allocated space
 * NULL in case of failure or if min > max
 */

int *array_range(int min, int max)
{
	int *p, i;
	
	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0; i + min <= max ; i++)
	{
		p[i] = min + i;
	}
	return (p);
}

