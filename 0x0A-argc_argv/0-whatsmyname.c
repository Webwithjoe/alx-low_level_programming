#include <stdio.h>
#include "main.h"

/**
 * main - This prints the name of the program
 * @argc: gives number of arguments
 * @argv: gives array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
