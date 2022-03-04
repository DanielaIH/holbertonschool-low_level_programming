#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: a count of the arguments supplied to the program
 * @argv: an array of pointers to the strings
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = argc; argc == i; i++)
		printf("%s\n", argv[0]);
	return (0);
}
