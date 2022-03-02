#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number
 * Return: factorial of number or -1 if n is negative
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n < 1)
		return (1);

	return (n * factorial(n - 1));
}
