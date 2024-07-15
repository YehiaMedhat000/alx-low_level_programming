#include "search_algos.h"

/**
 * print_array - Utility to print an array
 * @array: The array to print
 * @left: The lower index of the array
 * @right: The upper index of the array
 * Return: Nothing (void)
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		if (i > left)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - Function that implements the
 * binary_search algorithm
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to search
 * Return: The first index where it finds value
 * if value isn't found, returns -1
 * or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, mid;
	size_t right = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
