#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: count of remaining arguments
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *pointer;

va_start(args, n);

for (i = 0; i < n; i++)
{
	pointer = va_arg(args, char*);
	if (pointer != NULL)
		printf("%s", pointer);
	else
		printf("(nil)");
	if (i < (n - 1) && separator != NULL)
		printf("%s", separator);
}
printf("\n");
va_end(args);
}
