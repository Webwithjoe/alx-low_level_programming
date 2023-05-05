#include "main.h"

/**
 * binary_to_uint - FUNCTON converts a binary num to unsigned int.
 * @b: pointer to string containing a binary num
 *
 * Return: unsigned int with decimal value of binsry num, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	/* Use of for statement */
	unsigned int uint;
	int mylen, mybinary;

	if (!b)
		return (0);

	uint = 0;

	for (mylen = 0; b[mylen] != '\0'; mylen++)
		;

	for (mylen--, mybinary = 1; mylen >= 0; mylen--, mybinary *= 2)
	{
		if (b[mylen] != '0' && b[mylen] != '1')
		{
			return (0);
		}

		if (b[mylen] & 1)
		{
			uint += mybinary;
		}
	}
	return (uint);
}
