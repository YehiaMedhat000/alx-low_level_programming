#include "main.h"
/**
 * print_square - prints a square of # signs
 * @size: int type
 * Return: None, void
 */

void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar(\n);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0 ; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
