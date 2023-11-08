#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Gets the correct
 * operator according to the arguments
 * @s: The operator passed
 *
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	if (s == NULL)
		return (NULL);

	for (i = 0; i < 6; i++)
	{
		if (s == ops[i])
			return (*(ops[i]+1));
	}
}
