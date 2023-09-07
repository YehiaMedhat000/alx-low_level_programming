#include <stdio.h>

/*This is a c program */
/**
 *  main - This is a program that prints a statement using the puts() funtion
 *
 *  Return: Always success
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d byte(s)\n", (int)sizeof(a));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(b));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(d));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(e));
	return (0);
}
