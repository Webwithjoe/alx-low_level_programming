#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: integer input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	l++;
	}

	l += ac;

	string = malloc(sizeof(char) * l + 1);
	if (string == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			string[r] = av[i][n];
			r++;
		}
		if (string[r] == '\0')
		{
			string[r++] = '\n';
		}
	}
	return (string);
}
