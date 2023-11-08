#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a function
 * given an array as argument
 * @array: The array argument
 * @size: The size of the array
 * @action: Pointer to a function
 * to execute on the array
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL || array == NULL)
		return;
	if (size <= 0)
		return;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
