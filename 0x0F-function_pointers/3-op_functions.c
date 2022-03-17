#include "3-calc.h"

/**
 * op_add - function that adds two integer.
 * @a: integer
 * @b: integer
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that substracts two integer.
 * @a: integer
 * @b: integer
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two integer.
 * @a: integer
 * @b: integer
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two integer.
 * @a: integer
 * @b: integer
 * Return: the result of division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that modulates two integer.
 * @a: integer
 * @b: integer
 * Return: the remainder of division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
