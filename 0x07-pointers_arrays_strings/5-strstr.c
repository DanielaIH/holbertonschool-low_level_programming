#include "main.h"
#define NULL 0

/**
 * _strstr - locates the first occurence of a substring
 * @haystack: string to search
 * @needle: target substring
 * Return: pointer to first occurence of whole substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
