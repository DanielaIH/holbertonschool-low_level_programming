#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always O
 */

int main(int argc, char *argv[])
{
	char *ptr = (char *)main;
	int nb, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nb = atoi(argv[1]);

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nb; i++)
	{
		printf("%.2hhx", ptr[i]);
		if (i < nb - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
