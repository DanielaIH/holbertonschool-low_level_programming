#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: NULL if str = NULL or if insufficient memory was available
 * or pointer to duplicated string in allocated memory.
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *str2;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		size++, i++;
	size++;
	str2 = malloc(sizeof(char) * size);
	if (str2 == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str2[i] = str[i];
	}
	return (str2);
}
