#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int base);
int is_palindrome(char *s);

/**
 * find_strlen - Function that returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - Function checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @base: The index of the string to be checked.
 *
 * Return: If the string is a palindrome return 1.
 *         If the string is not a palindrome return 0.
 */
int check_palindrome(char *s, int len, int base)
{
	if (s[base] == s[len / 2])
		return (1);

	if (s[base] == s[len - base - 1])
		return (check_palindrome(s, len, base + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int base = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, base));
}
