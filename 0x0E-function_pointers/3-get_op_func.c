#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - Select correct function to perform operation asked by user
 * @s: Operator passed to program
 *
 * Return: A pointer to the correct function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[6] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s[0] == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
