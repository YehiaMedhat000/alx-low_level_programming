#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: names of arguments
 * Return: Always success, (0)
 */

int main(int argc, char **argv)
{
	int num, i, n_coins;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		num = atoi(argv[1]);
		if (num < 0)
		{
			printf("0\n");
			return (0);
		}

		for (i = 0; i < 5 && num >= 0; i++)
		{
			if (num / coins[i])
			{
				n_coins += num / coins[i];
				num %= coins[i];
			}
		}

		printf("%d\n", n_coins);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
