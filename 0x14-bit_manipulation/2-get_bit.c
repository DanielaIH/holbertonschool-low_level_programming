#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: index of the bit you want to get
 * Return: bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8)) /* if index is not accessible */
	return (-1);

if ((n >> index) & 1) /* compares bit to bit */
	return (1);
else
	return (0);
}
