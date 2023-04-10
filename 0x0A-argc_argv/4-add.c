#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
  * main - program that prints the number of arguments passed into it.
  * @argc: number of arguments passed
  * @argv: an array of the arguments passed
  * Return: return 0 always
  */
int main(int argc, char *argv[])
{
	unsigned int i, sum1, num1;

	sum1 = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num1 = atoi(argv[argc]);
		sum1 += num1;
	}
	printf("%d\n", sum1);
	return (sum1);
}
