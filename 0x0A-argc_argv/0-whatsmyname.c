#include <stdio.h>
#include "main.h"
/**
 * main - function prints name followd by a new line.
 * @argc: gives number of arguments.
 * @argv: gives program array
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
