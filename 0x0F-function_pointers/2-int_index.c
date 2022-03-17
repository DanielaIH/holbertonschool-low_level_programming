#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: pointer to an array
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 if no element matches or size <= 0, the index of
 * the first element for which the cmp function does not return 0
 */


int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
	return (-1);

if (array && cmp)
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
		return (i);
	}
else
	return (-1);

return (-1);
}
