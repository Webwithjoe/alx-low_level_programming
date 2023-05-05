#include "main.h"


/**
 * clear_bit - FUN sets bit value to 0 at given index.
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: 1 if SUCCESS, or -1 if an ERROR
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clearbit;

	/* If statement */
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	clearbit = ~(1 << index);
	*n = *n & clearbit;
	return (1);
}
