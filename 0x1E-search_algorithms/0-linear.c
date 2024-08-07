#include "search_algos.h"

/**
 * linear_search - Function that implements the
 * linear_search algorithm
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to search
 * Return: The first index where it finds value
 * if value isn't found, returns -1
 * or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
