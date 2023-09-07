#include <stdio.h>
#include <string.h>
/*This is a c program */
/**
 *  main - This is a program that prints a statement using the puts() funtion
 *
 *  Return: Always success
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;

	for (i = 0; i < strlen(str) ; i++)
	{
		putchar(str[i]);
	}

	return (1);
}
