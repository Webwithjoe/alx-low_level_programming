#include "main.h"


/**
 * flip_bits - gives num of different bits between two nums
 * @n: first num
 * @m: second num
 *
 * Return: num of bits you would need to flip
 * to get from one num to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bitdiff, mycheck;
	unsigned int count, a;
/* variables declared and initialized */
	count = 0;
	mycheck = 1;
	bitdiff = n ^ m;
	for (a = 0; a < (sizeof(unsigned long int) * 8); a++)
	{
		if (mycheck == (bitdiff & mycheck))
			count++;
		mycheck <<= 1;
	}
	return (count);
}

