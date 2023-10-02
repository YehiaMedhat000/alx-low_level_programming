#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments passed to the executable
 * Return: Always success (0)
 */

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (*argv[1] - 48) * (*argv[2] - 48));
	return (0);
}
