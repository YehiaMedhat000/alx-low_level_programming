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
		sum = fib1 + fib2;

		if (sum > 4000000)
			printf("\n");
			return (0);

		if (sum % 2 == 0)
			printf("%lu", sum);
			printf(", ");

		fib1 = fib2;
		fib2 = sum;
	}

	return (0);
}
