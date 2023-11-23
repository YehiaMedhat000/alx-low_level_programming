#include "main.h"

/**
 * clear_bit - Sets the bit in the
 * ith index to 0
 * @n: Pointer to the number
 * @index: The index of the needed bit
 * Return: 1 if success, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
