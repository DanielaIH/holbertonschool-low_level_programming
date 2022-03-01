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
	char *first = NULL;
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			first = &(s[i]);
			break;
		}
		else
			s++;
	}
	return (first);
}
