#include "main.h"
#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i;
	int countto = 50;
	long a = 1;
	long b = 2;

	for (i = 1; i <= (countto / 2); i++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (countto % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
