#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the first element of the array
 * Return: Nothing, void
 */
void rev_string(char *s)
{
	int i;
	int len = strlen(s);
	char t;

	for (i = 0; i < len / 2; i++)
	{
		t = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = t;
	}

}
