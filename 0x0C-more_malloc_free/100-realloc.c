#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: n bytes of the allocated space for ptr
 * @new_size: n bytes of the new memory block
 * Return: pointer to reallocated memory or NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		if (pointer == NULL)
			return (NULL);
		else
			return (pointer);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	pointer = malloc(new_size);
	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)pointer + i) = *((char *)ptr + i);
	free(ptr);

	return (pointer);
}
