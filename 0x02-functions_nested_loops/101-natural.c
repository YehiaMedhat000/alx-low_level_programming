#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return: (0) Always success
 */
int main(void)
{
	int s = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			s += i;
		}
	}
	printf("%d\n", s);
	return (0);
}
