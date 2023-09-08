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

	for (i = 'z' ; i >= 'a' ; i--)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
