#include main.h

/**
 * factorial - function that returns the factorial of a number
 * @n: number to return the factorial from
 * Return: return the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (n * factorial(n - 1));
