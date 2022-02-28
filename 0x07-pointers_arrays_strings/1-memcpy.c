#include "main.h"

/**
 *_memcpy - copies memory area
 * @dest: destination of bytes to copy
 * @src: source of bytes to copy
 * @n: number of bytes of the memory area to copy
 * Return: a pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
