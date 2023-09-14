#include "main.h"
/**
 * most_numbers - prints 0-14 ten lines followed by \n
 * Return: None, void
 */

void most_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			_putchar(j % 10 + '0');
		}
	}

	printf("\n");
}
