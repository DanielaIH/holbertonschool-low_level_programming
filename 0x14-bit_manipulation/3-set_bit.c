#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to number
 * @index: index of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{

if (index > (sizeof(unsigned long int) * 8) || n == NULL)
/* if index is not accessible or pointer is NULL */
	return (-1);

if ((*n >> index) & 1) /* compares bit to bit */
	return (1);

else
{
	*n = *n | (1 << index); /* operates OR bit to bit */
	return (1);
}
}
