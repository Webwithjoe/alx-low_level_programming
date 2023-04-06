#include "main.h"
/**
 * _pow_recursion - This  function returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 * Return: The value of x raised to the power of y.
 *          when y < 0, -1 is returned
 *          when y == 0, 1 is returned
 */
int _pow_recursion(int x, int y)
{
	int answer = x;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	answer *= _pow_recursion(x, y - 1);

	return (answer);
}
