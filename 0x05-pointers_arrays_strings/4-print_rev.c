#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int i, count_len = 0;

	while (*s != '\0')
	{
		count_len++;
		++s;
	}
	for (i = count_len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
