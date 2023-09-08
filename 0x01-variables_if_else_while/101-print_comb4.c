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
	int k;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
			if (i - j >= 0)
			{
				continue;
			}
			for (k = 48 ; k < 58 ; k++)	
			{
				if (j - k >= 0)
				{
					continue;
				}

				putchar(i);
				putchar(j);
				putchar(k);

				if (i == 55)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
