#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function duplicate to new memory space location
 * @str: char to duplicate
 * Return: 0
 */

char *_strdup(char *str)
{
	char *dup;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	dup = malloc(sizeof(char) * (a + 1));

	if (dup == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		dup[b] = str[b];
	return (dup);
}
