#include "main.h"

/**
 * print_binary - Prints a binary number
 * @n: The number to print
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int len = sizeof(n) * 8, prt = 0;

	while (len)
	{
		if (n & 1L << --len)
		{
			printf("1");
			prt++;
		}
		else if (prt)
			printf("0");
	}
	if (!prt)
		printf("0");
}
