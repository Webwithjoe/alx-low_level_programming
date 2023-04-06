#include "main.h"

int actual_sqrt_recursion(int num, int i);
/**
 * _sqrt_recursion - This function returns the natural square root of a number
 * @num: number to calculate the square root of
 *
 * Return: the calculated square root
 */
int _sqrt_recursion(int num)
{
	if (num < 0)
		return (-1);
	return (actual_sqrt_recursion(num, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @num: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the calculated square root
 */
int actual_sqrt_recursion(int num, int i)
{
	if (i * i > num)
		return (-1);
	if (i * i == num)
		return (i);
	return (actual_sqrt_recursion(num, i + 1));
}
