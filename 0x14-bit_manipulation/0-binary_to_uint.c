#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: unsigned number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0') /* iterates through all digit.*/
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		number <<= 1;
		number += b[i] - '0';
		i++;
	}
	return (number);
}
