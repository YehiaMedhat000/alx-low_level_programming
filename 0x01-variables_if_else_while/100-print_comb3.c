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
	int j;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
			if (i - j > 0)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			if (i == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
