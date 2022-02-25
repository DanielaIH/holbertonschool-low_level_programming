#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: return string encoded
 */
char *leet(char *str)
{
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
			}
		}
	}
	return (str);
}
