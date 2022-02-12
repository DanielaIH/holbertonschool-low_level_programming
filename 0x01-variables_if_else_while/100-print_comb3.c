#include <stdio.h>

/**
 *main - print 00 to 99 with no duplicate digits or combos: no 11, no 10 (01)
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int one;
	int ten;

	for (ten = '0'; ten <= '9'; ten++)
	{
		for (one = (ten + 1); one <= '9'; one++)
		{
			putchar(ten);
			putchar(one);

			if (ten != '8' || one != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
