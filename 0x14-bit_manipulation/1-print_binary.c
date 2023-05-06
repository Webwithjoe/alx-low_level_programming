#include "main.h"

/**
 * _pow - FUN calculates (base ^ power)
 * @base: expomemt base
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	/* variable declaration*/
	unsigned long int mynum;
	unsigned int a;

	mynum = 1; /* variable assignment */
	for (a = 1; a <= power; a++)
		mynum *= base;
	return (mynum);
}

/**
 * print_binary - function prints a num in binary notation
 * @n: number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag; /* variable declaration */

	flag = 0; /* variable assignmennt*/
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
