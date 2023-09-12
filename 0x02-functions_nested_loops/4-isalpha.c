#include "main.h"
/**
 * main - Checks if a char is lowercase
 * Return: Always 0 (success)
 */

int _isalpha(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (i + 32 == c)
		{
			return (1);
		}
	}
	for (i = 97; i <= 122; i++)
	{
		if (i + 32 == c)
		{
			return (1);
		}
	}
	return (0);
}

