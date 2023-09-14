#include "main.h"
/**
 * print_traingle - prints a traingle of # signs
 * @size: int type
 * Return: None, void
 */

void print_traingle(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		for (j = 0 ; j < size; j++)
		{
			if (j >= size - i)
			{
				_putchar('#')
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
