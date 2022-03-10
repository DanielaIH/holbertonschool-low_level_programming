#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory and set all values to 0
 * @nmemb: number elements of array
 * @size: n bytes each element of array
 * Return: pointer to the allocated memory or NULL
 * if nmemb or size is 0, even malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);
	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)pointer + i) = 0;

	return (pointer);
}
