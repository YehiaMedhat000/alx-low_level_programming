#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Checks whether a number is less than 6
 * and greater than 0 
 * or greater than 5
 * or is 0
 * 
 * Return: 0 (sucess)
 */

int main(void)
{
	int n;
	int ldig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldig = n % 10;
	
	if (ldig < 6 && ldig > 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldig);
	}
	else if (ldig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ldig);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, ldig);
	}
	return (0);
}
