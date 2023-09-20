#include "main.h"

/**
 * cap_string - make a string in sentence case
 * @s: char pointer
 *
 * Return: char pointer
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		i++;
	}

	return (s);
}
