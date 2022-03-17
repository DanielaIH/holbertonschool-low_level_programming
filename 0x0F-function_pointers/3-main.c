#include "3-calc.h"
/**
 * main - program that performs simple operations.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Result
 */

int main(int argc, char *argv[])
{
	int (*pointer)(int, int);
	int result, num1 = atoi(argv[1]), num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	pointer = get_op_func(argv[2]);
	if (pointer == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = pointer(num1, num2);
	printf("%d\n", result);

	return (0);
}
