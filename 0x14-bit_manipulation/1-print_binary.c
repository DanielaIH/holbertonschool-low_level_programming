#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: number
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int n2 = n;
	int len = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n2 > 0) /* counts the lengh of n */
	{
		n2 >>= 1; /* move n2 one bit to right */
		len++;
	}
	len--;

	while (len >= 0)
	{
		if ((n >> len) & 1) /* compares bit to bit */
			_putchar('1');
		else
			_putchar('0');
		len--;
	}
}
