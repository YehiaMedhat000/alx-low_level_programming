#include <stdio.h>

/**
 * main - entry point
 * Return: (0), Always success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 3)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
