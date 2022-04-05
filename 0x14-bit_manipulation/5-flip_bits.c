#include "main.h"

/**
 * flip_bits - number of bits to flip to get from one number to another.
 * @n: number origin.
 * @m: number to flip drom origin.
 * Return: number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, xor;

	xor = n ^ m; /* compares bit to bit */

	while (xor > 0)
	{
		if (xor & 1) /* if xor is 1, n and m are diff in that bit*/
			i++, xor >>= 1; /* move xor one bit to right */
		else
			xor >>= 1; /* move xor one bit to right */
	}

	return (i);

}
