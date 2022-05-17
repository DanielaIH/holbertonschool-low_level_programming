#include "calc.h"
/**
 * mod - function that modulates two integer.
 * @a: integer
 * @b: integer
 * Return: the remainder of division of a by b
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
