#include "function_pointers.h"
/**
 * int_index - prints name
 * @array: array
 * @size: no of elements to print
 * @cmp: pointer to one of the functions
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0 ; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
