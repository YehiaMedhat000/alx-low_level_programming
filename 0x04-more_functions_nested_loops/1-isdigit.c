#include "main.h"
/**
 * _isdigit - checks whether a char is digit
 * @c: type char
 * Return: if c isn't digit 0
 * and 1 if c is digit
 */

int _isupper(char c)
{
	if (c >= 48 || c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
