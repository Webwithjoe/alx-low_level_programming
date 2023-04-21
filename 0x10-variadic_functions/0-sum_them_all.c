#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum a set of paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0, return 0
 * Otherwise - return the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list path;
	unsigned int a, sum = 0;

	va_start(path, n);

	for (a = 0; a < n; a++)
		sum += va_arg(path, int);

	va_end(path);

	return (sum);
}
