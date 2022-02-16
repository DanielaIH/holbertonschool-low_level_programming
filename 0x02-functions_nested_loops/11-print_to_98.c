#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print natual numbers from n to 98
 * @n: Entry number
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	printf("98\n");
}
