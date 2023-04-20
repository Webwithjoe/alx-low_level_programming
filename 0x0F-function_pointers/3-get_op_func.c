#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects correct function to perform
 * the operation asked by the user
 * @s: The operator passed as argument
 *
 * Return: A pointer to the function corresponding
 * with the operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int a = 0;

	while (a < 5)
	{
		if (*s == *ops[a].op)
			break;
		a++;
	}

	return (ops[a].f);
}
