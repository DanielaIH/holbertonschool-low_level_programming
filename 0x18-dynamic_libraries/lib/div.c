#include "calc.h"
/**
 * div - function that divides two integer.
 * @a: integer
 * @b: integer
 * Return: the result of division of a by b
 */
int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}
