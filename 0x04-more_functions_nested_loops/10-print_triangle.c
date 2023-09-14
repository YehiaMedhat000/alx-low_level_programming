#include "main.h"
/**
 * print_traingle - prints a traingle of # signs
 * @size: int type
 * Return: None, void
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0 ; j < size; j++)
			{
				if (j + i + 1 >= size)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}	
	}
}
