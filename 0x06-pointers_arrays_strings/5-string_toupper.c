#include "main.h"

/**
 * string_toupper -  changes all lower-
 * case letters of a string to uppercase
 * @s: string to manipulate
 * Return: string capitalized
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
