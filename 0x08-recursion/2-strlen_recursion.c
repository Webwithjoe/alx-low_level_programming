#include "main.h"
/**
 * _strlen_recursion - This code Returns the length of a string
 * @s: The string to be measured
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int howlong = 0;

	if (*s)
	{
		howlong++;
		howlong += _strlen_recursion(s + 1);
	}
	return (howlong);
}
