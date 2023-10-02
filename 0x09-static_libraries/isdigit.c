#include "main.h"
/**
 * _isdigit - checks whether a char is digit
 * @c: type int
 * Return: if c isn't digit 0
 * and 1 if c is digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
