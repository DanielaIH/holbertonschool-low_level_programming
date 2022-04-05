#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to number
 * @index: index of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

if (index > (sizeof(unsigned long int) * 8) || n == NULL)
/* if index is not accessible or pointer is NULL */
	return (-1);

if ((*n >> index) & 0) /* compares bit to bit */
	return (1);

else
{
	*n = *n & ~(1 << index); /* operates bit to bit */
	return (1);
}
}
