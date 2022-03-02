#include "main.h"

/**
 * find_root - search a number that multiplies by self
 * is equal to n
 * @n: given number
 * @i: counter searching square root
 * Return: natural square root, or -1 if not natural root
 */

int find_root(int n, int i)
{
	if (i * i == n)
		return (i);

	else if (i * i < n)
		return (find_root(n, i + 1));

	return (-1);
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: given number
 * Return: natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n)
{
	return (find_root(n, 1));
}

