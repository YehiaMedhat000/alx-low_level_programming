#include "main.h"

/**
 * cap_string - make a string in sentence case
 * @s: char pointer
 *
 * Return: char pointer
 */

char *cap_string(char *s)
{
	int i = 0, j;
	char del[] = " ,;.!?\"(){}\t\n";

	while (s[i])
	{
		j = 0;
		while (del[j])
		{
			if ((i == 0 || s[i - 1] == del[j]) && (s[i] >= 97 && s[i] <= 122))
			{
				s[i] -= 32;
			}
			j++;
		}

		i++;
	}

	return (s);
}
