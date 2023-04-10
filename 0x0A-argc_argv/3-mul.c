#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program multiplies two numbers
 * @argc: the number of aruguments
 * @argv: the array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, multiply = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (a = 1; a < argc; a++)
	{
		multiply *= atoi(argv[a]);
	}
	printf("%d\n", multiply);
	return (0);
