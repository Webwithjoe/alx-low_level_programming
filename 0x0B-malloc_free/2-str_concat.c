#include "main.h"
#include <stdlib.h>

/**
  * str_concat - Program concatenates two strings.
  * @s1: first string to concatenate
  * @s2: second string to concatenate
  * Return: NULL, if concatenation fails
  * Else, a pointer to the newly-allocated space in memory
  * containing the concatenated strings.
  */

char *str_concat(char *s1, char *s2)
{
	char *concat_s;
	int a, b = 0, length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] || s2[a]; a++)
		length++;

	concat_s = malloc(sizeof(char) * length);

	if (concat_s == NULL)
		return (NULL);

	for (a = 0; s1[a]; a++)
		concat_s[b] = s1[a];

	for (a = 0; s2[a]; a++)
		concat_s[b] = s2[a];

	return (concat_s);
}
