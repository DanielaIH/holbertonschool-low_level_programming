#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: pointer to string
 * @f: pointer to function f
 * Return: Nothing *
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
	(*f)(name);
}
