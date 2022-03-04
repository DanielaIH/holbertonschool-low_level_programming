#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: a count of the arguments supplied to the program
 * @argv: an array of pointers to the strings
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	if (argv != 0)
		printf("%i\n", argc - 1);
	return (0);
}
