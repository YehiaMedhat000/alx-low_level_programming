#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - Gets the operator
 * @int: first argument
 * @int: second argument
 * Return: Function pointer to the
 * corresponding function of operation
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t op[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (op[i].op != NULL)
	{
		if (*(op[i].op) == *s)
		{
			return (op[i].f);
		}
		i++;
	}

	return (NULL);
}
