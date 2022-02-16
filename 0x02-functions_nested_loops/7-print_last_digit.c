#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @i: integer argument
 * Return: last digit of number
 */

int print_last_digit(int i)
{
	if (i < 0)
		i *= -1;

	_putchar('0' + (i % 10));

	return (i % 10);
}
