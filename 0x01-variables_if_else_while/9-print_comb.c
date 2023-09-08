#include <string.h>
#include <stdio.h>
/**
 * main - prints the alphabet reversed lowercase
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
		if (i == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
