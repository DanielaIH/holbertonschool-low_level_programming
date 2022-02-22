#include "main.h"
/**
 * print_array - unction that prints n elements of an array of integers
 * @a: data
 * @n: data
 */
void print_array(int *a, int n)
{
	int b = 0;

	for (b = 0; b < n; b++)
	{
		if (b == n - 1)
		{
			printf("%d", a[b]);
		}
		else
		{
			printf("%d, ", a[b]);
		}
	}
	printf("\n");
}
