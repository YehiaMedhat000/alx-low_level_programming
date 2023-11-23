#include "main.h"

/**
 * flip_bits - Gets the number of bits
 * you would need to flip to get from 
 * a number to another
 * @n: The first number
 * @m: The second number
 * Return: The number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int flips = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			flips++;

		xorval = xorval >> 1;
	}
	return (flips);
}
