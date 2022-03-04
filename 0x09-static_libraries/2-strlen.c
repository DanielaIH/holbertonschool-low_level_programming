#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{

	int count_len = 0;

	while (*s != '\0')
	{
		count_len++;
		s++;
	}

	return (count_len);
}
