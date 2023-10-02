#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments passed to the executable
 * Return: Always success (0)
 */

int main(int argc, char **argv)
{
	int n1 = *argv[1] - 48;
	int n2 = *argv[2] - 48;
	int total = n1 * n2;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", total);
	return (0);
}
