#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to a string
 * @s2: pointer to second string
 * @n: n bytes to concatenate to first string
 * Return: pointer to concatenated string or
 * NULL if the function fails or n is negative
 * treat it as an empty string if s1 s2 are NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int size = 0, i = 0, j = 0, chars_s1 = 0, chars_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		chars_s1++;
	for (i = 0; s2[i] != '\0'; i++)
		chars_s2++;

	if (n >= chars_s2 + 1)
		size = chars_s1 + chars_s2;
	else
		size = chars_s1 + n;

	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; i <= size; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[size] = '\0';
	return (str);
}
