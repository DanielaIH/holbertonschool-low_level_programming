#include "main.h"

/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	int diag;
	int space;

	if (n > 0)
	{
		for (diag = 1; diag <= n; diag++)
		{
			for (space = 1; space < diag; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

