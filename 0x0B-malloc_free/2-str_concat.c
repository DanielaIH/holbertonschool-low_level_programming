#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size1 = 0, size2 = 0;
	char *str2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		size1++, i++;
	while (s2[j] != '\0')
		size2++, j++;
	size2++;
	str2 = malloc(sizeof(char) * (size1 + size2));

	if (str2 == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		str2[i] = s1[i];
	}
		for (j = 0; j < size2; j++)
	{
		str2[i] = s2[j];
		i++;
	}
	return (str2);
}
