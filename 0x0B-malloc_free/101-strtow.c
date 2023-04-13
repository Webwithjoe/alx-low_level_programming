#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int assign, a, b;

	assign = 0;
	b = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			assign = 0;
		else
			if (assign == 0)
			{
				assign = 1;
				b++;
			}
	}

	return (b);
}

/**
 * strtow - function that splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **split, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
	len++;
	words = count_word(str);
	if (words == 0)
	return (NULL);
	split = (char **) malloc(sizeof(char *) * (words + 1));
	if (split == NULL)
	return (NULL);
	for (i = 0; i <= len; i++)
	{
	if (str[i] == ' ' || str[i] == '\0')
	{
		if (c)
		{
		end = i;
		tmp = (char *) malloc(sizeof(char) * (c + 1));
	if (tmp == NULL)
		return (NULL);
	while (start < end)
	*tmp++ = str[start++];
	*tmp = '\0';
	split[k] = tmp - c;
	k++;
	c = 0;
	}
	}
	else if (c++ == 0)
	start = i;
	}
	split[k] = NULL;

	return (split);
}
