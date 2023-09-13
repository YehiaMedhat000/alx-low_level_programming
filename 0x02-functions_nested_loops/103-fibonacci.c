#include <stdio.h>

/**
 * main - Prints terms of fibonacci series that don't exceed 4000000
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, sum;

	for (count = 0; count < 4000000; count++)
	{

		if (sum > 4000000)
		{
			printf("%lu\n", sum);
			return (0);
		}
		if (fib1 + fib2 % 2 == 0)
		{
			sum = fib1 + fib2;
		}
		fib1 = fib2;
		fib2 = sum;
	}

	return (0);
}
