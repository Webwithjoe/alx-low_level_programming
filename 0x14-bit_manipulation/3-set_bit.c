#include "main.h"

/**
 * set_bit - FUNC sets bit value at given index.
 * @n: inputted num
 * @index: inputted index
 * Return: 1 if success or -1 if otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setb;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setb = 1 << index;
	*n = *n | setb;
	return (1);
}
