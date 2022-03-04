#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: string
 * @s2: string
 * Return: 0 If the strings are equal
 * and >0 if str1 is greater (in ASCII)
 * than str2 and <0 otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, flag = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = s1[i] - s2[i];
			break;
		}
		else
			flag = 0;
	}

	return (flag);
}
