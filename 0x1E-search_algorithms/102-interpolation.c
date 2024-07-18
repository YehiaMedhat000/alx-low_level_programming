#include "search_algos.h"

size_t get_pos(size_t low, size_t high, int *array, int value);

/**
 * interpolation_search - Function that implements the
 * interpolation search algorithm
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to search in the array
 * Return: The index where value is found
 * otherwise, it returns (-1)
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos = 0, chk_pos = 0, chk_val = 0;

	if (!array || !size)
		return (-1);
	do {

		pos = get_pos(low, high, array, value);

		chk_pos = pos < high && pos > low;
		chk_val = array[low] <= value && array[high] >= value;

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			while (array[pos - 1] == array[pos])
				pos--;

			return (pos + 1);
		}
		else if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;

	} while (low < high && chk_pos && chk_val);

	return (-1);
}

/**
 * get_pos - Gets the pos to facilitate
 * calculations
 * @low: The lower bound
 * @high: The higher bound
 * @array: The array to search
 * @value: The value to search
 * Return: The pos variable according
 * to the params
 */

size_t get_pos(size_t low, size_t high, int *array, int value)
{
	double num = (double)(high - low) / (array[high] - array[low]);
	int denom = value - array[low];
	size_t pos = (num * denom) + low;

	return (pos);
}
