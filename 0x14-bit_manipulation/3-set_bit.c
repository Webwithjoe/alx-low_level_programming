#include "main.h" /* The header file */

/**
 * set_bit - FUNC sets bit value at given index.
 * @n: inputted num
 * @index: inputted index
 * Return: 1 if success or -1 if otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitset = 0;

	if (index > 63)
		return (-1);

	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
