#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: start range from
 * @max: end range at
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *pointer;
	int i = 0, size = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pointer = malloc(sizeof(int) * size);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		pointer[i] = min + i;
	}
	return (pointer);
}
