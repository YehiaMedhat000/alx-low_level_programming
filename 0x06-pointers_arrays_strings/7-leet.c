#include "main.h"

/**
 * leet - Encodes a string into the 1337
 *
 * @s: The string to encode
 *
 * Return: Char pointer
 */

char *leet(char *s)
{
	int i = 0, j;
	char lu[] = "AEOTL";
	char ll[] = "aeotl";
	char en[] = "43071";

	while (s[i])
	{
		j = 0;
		while(lu[j])
		{
			if (s[i] == lu[j] || s[i] == ll[j])
			{
				s[i] = en[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
