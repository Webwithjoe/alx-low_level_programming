#include <stdio.h>

/**
 * main - program prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int cbytes, a;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	cbytes = atoi(argv[1]);

	if (cbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	for (a = 0; a < cbytes; a++)
	{
		if (a == cbytes - 1)
		{
			printf("%02hhx\n", arr[a]);
			break;
		}
		printf("%02hhx ", arr[a]);
	}
	return (0);
}

