#include <string.h>
#include <stdio.h>
/**
 * main - prints the alphabet lower case
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0 ; (unsigned int)i < strlen(str) ; i++)
	{
		if (str[i] == 'e' || str[i] == 'q')
		{
			continue;
		}
		putchar(str[i]);
	}
	return (0);
}
