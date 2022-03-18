#include "variadic_functions.h"

/**
 * print_numbers - prints its parameters
 * @separator: string to be printed between numbers
 * @n: count of remaining arguments
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL)
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d", va_arg(args, int));
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}

