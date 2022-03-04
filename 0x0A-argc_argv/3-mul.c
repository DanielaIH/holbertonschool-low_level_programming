#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: a count of the arguments supplied to the program
 * @argv: an array of pointers to the strings
 * Return: 1 if program does not receive two arguments or
 * 0 if program receives two arguments
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
