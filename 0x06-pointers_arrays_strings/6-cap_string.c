#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to change
 * Return: string capitalized
 */

char *cap_string(char *s)
{
	char specialchar[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}', '\0'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; specialchar[j]; j++)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				if (s[i - 1] == specialchar[j])
				{
					s[i] = s[i] - 32;
				}
				else if (i == 0)
				{
					s[i] = s[i] - 32;
				}
			}
		}
	}

	return (s);
}
