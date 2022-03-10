#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: 98 if malloc fails or pointer
 * to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
	{
		free(memory);
		exit(98);
	}
	return (memory);
}
