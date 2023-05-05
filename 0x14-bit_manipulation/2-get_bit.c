#include "main.h"


/**
 * get_bit - This FUNC returns value of bit at a given index.
 * @n: number to check bits in
 * @index: INDEX to check bit
 *
 * Return: value of the bit, or -1 if OTHERWISE
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
