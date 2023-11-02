#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: The number of elements
 * @size: The size of each element
 * Return: Pointer to the allocated space
 * NULL in failure or if one parameter atleast is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	/* Tried assigning the values of the elements */
	for (; nmemb > 0 ; nmemb -= 1)
	{
		p[nmemb - 1] = 0;
	} 
	/* Returns nothing with the current code */
	return (p);
}
