#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int count_len = 0;

	while (*s != '\0')
	{
		count_len++;
		++s;
	}
	while (count_len >= 0)
	{
		_putchar(*s);
		count_len--;
		s--;
	}
	_putchar('\n');
}
