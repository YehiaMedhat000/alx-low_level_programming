#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments passed to the executable
 * Return: Always success (0)
 */

int main(int argc, char **argv)
{
	int i, total;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(*argv[i] >= 48 && *argv[i] <= 57))
			{
				printf("Error\n");
				return (1);
			}
		}

		total = 0;

		for (i = 1; i < argc; i++)
		{
			total += atoi(argv[i]);
		}
		printf("%d\n", total);
	}

	else if (argc == 1)
	{
		printf("0\n");
	}

	return (0);
}
