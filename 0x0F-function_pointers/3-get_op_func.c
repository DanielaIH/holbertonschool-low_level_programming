#include "3-calc.h"

/**
 * get_op_func - function that adds two integer.
 * @s: pointer to operator passed as argument to the program
 * Return: a pointer to the function that corresponds
 * to the operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)

{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (i < 5)
	{
		if (*s == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
