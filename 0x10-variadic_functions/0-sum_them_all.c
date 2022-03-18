#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its parameters
 * @n: count of remaining arguments
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (n);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
