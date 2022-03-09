#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)

{
	int **pointer;
	int i = 0;

	if (width == 0 || height == 0)
		return (NULL);

	pointer = (int **)malloc(sizeof(int *) * width);
		for (i = 0; i < width; i++)
			pointer[i] = (int *)malloc(sizeof(int) * height);
	if (pointer == NULL)
		return (NULL);

	return (pointer);
}
