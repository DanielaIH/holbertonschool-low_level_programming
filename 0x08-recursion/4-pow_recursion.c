#include "main.h"

/**
 *_pow_recursion - function that returns the value of
 * x raised to the power of y
 * @x: value to raise
 * @y: power
 * Return: -1 if y is lower than 0 or the value of x
 * raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, (y - 1)));
}
