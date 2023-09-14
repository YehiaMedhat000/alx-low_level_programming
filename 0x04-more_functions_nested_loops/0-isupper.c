#include "main.h"
/**
 * _isupper - checks whether a char is uppercase
 * @c: type char
 * Return: if c isn't upper 0
 * and 1 if c is upper
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
