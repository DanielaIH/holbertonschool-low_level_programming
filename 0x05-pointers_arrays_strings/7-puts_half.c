#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */

void puts_half(char *str)
{
	int inicio;
	int len = 0;

	while (*(str + len))
	len++;
	if (len % 2 != 0)
		inicio = (len / 2) + 1;
	else
		inicio = (len / 2);

	while (inicio < len)
	{
		_putchar(*(str + inicio));
		inicio++;
	}
	_putchar('\n');
}

