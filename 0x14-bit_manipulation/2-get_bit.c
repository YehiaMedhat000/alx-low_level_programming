#include "main.h"

/**
 * get_bit - Gets the ith index bit
 * @n: The number
 * @index: Index of the bit
 * Return: The value of the bit
 * -1 in case of fialure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
