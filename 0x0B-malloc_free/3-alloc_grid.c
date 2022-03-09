#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)

{
	int **pointer;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	pointer = malloc(sizeof(int *) * height);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		pointer[i] = (int *)malloc(sizeof(int) * width);

		if (pointer[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(pointer[i]);
			free(pointer);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			pointer[i][j] = 0;
	}
	return (pointer);
}
