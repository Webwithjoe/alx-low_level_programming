#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int j, k;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	j = atoi(argv[1]);
	op = argv[2];
	k = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && k == 0) ||
		(*op == '%' && k == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(j, k));

	return (0);
}
