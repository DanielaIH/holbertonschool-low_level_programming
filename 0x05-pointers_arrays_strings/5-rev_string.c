#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	char *inicio = s;
	char t;

	for (; *(s); s++)
	{
	}
	s--;
	for (; s >= inicio; s--)
	{
		t = *inicio;
		*inicio = *s;
		*s = t;
		inicio++;
	}
}
