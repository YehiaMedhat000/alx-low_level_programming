#include <string.h>
#include <stdio.h>
/**
 * main - prints the alphabet reversed lowercase
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
	}
	for (i = 'a' ; i < 'g' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
