#include "main.h"
#define NULL 0

/**
 * _strchr - locates a character in a string
 * @s: pointer to string to search
 * @c: target characer
 * Return: pointer to that character in string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) && *(s + i) != c)
		i++;

	if (*(s + i) == c)
		return (s + i);
	else
		return (NULL);
}
