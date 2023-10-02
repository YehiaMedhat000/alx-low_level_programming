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
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);
	int total = n1 * n2;

	if (argc == 3)
	{
		printf("%d\n", total);
		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}
