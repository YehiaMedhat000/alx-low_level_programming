#include "lists.h"
#include <stdio.h>

void prt_first(void) __attribute__ ((constructor));

/**
 * prt_first - Prints a sentence before
 * the main.c is executed
 *
 * Return: void
 */

void prt_first(void)
{
	printf("You're beat! and yet, ");
	printf("you must allow,\nI bore my");
	printf(" house upon my back!\n");
}
