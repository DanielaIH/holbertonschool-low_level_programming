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

	if (n != 0 && separator != NULL)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%i%s", va_arg(args, int), separator);
		}
		printf("%i\n", va_arg(args, int));
		va_end(args);
	}
}
