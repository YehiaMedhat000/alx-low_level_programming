#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments passed to the executable
 * Return: Always success (0)
 */

int main(int argc, char *argv[])
{
	argv[0] = "";

	printf("%d\n", argc - 1);
	return (argc);
}
