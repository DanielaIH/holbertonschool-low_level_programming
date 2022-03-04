#include <stdio.h> /*printf*/
#include <stdlib.h> /*strtol*/

/**
 * main - program that adds positive numbers
 * @argc: a count of the arguments supplied to the program
 * @argv: an array of pointers to the strings
 * Return: 1 if program does not receive two arguments or
 * 0 if program receives two arguments
 */

int main(int argc, char *argv[])
{
	int i, y;
	char *p;
	long int sum = 0;

	if (argc > 1)
	{

		for (i = 1; argv[i]; i++)
		{
			y = strtol(argv[i], &p, 10);
			if (!*p)
				sum += y;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%ld\n", sum);
	return (0);
}
