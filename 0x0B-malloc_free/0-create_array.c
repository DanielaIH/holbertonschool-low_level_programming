#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of array
 * @c: char to fill the array
 * Return: NULL if size = 0, pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *A;

	if (size == 0)
		return (NULL);

	A = malloc(size * sizeof(char));
	if (A == NULL)
		return (NULL);

	for (i = 0; i < (int)size; i++)
	{
		A[i] = c;
	}
	A[i + 1] = '\0';
	return (A);
}
