#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: append to this string
 * @s2: concatenate from this string
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, long1 = 0, long2 = 0;

	while (s1 && s1[long1])
		long1++;
	while (s2 && s2[long2])
		long2++;

	if (n < long2)
		s = malloc(sizeof(char) * (long1 + n + 1));
	else
		s = malloc(sizeof(char) * (long1 + long2 + 1));

	if (!s)
		return (NULL);

while (a < long1)
{
s[a] = s1[a];
a++;
}

while (n < long2 && i < (long1 + n))
	s[a++] = s2[b++];

	while (n >= long2 && a < (long1 + long2))
	s[a++] = s2[b++];

	s[a] = '\0';

	return (s);
}
