#include <stdio.h>

/**
 *main - print lowercase alpha a-z but remove 'q' and 'e'
 *Return: Always 0 (Success)
 */

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if ((n != 'q') && (n != 'e'))
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');

	return (0);
}
