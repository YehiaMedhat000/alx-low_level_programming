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
	size_t idx;

	if (!array || !size)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array [%ld] = [%d]\n", idx, array[idx]);
		if (value == array[idx])
		{
			return ((int)idx);
		}
	}
	return (-1);
}
