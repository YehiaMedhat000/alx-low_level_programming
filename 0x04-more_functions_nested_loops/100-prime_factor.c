#include <stdio.h>

/**
 * main - entry point
 * Return: (0), Always success
 */

int main(void)
{
	int i = 2;
	long long int num = 612852475143;

	while (1)
	{
		if (num == 1)
		{
			printf("%d\n", i);
			break;
		}
		if (num % i == 0)
		{
			num /= i;
		}
		else
		{
			i++;
		}
	}
	return (0);
}
