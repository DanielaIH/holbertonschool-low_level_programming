#include "main.h"

/**
 * reverse_array - function that reverses
 * the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int temp, i = 0;
	int end = n - 1;

	while (i < end)
	{
		temp = *(a + i);
		*(a + i) = *(a + end);
		*(a + end) = temp;
		i++, end--;
	}
}
