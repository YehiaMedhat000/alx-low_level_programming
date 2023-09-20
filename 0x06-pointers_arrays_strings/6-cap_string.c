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
	int j;
	char del[] = " ,;.!?\"(){}\t";

	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			j = 0;
			while (del[j])
			{
				if (s[i - 1] == del[j] || i == 0)
				{
					s[i] -= 32;
				}
				j++;
			}
		}
		i++;
	}

	return (s);
}
