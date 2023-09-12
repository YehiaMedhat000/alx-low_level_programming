#include "main.h"
/**
 * _isalpha - Checks if a char is an alphabet letter
 * @c: type int
 * Return: Always 0 (success)
 */

int _isalpha(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	for (i = 97; i <= 122; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}

