#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to check
 * @size: size value
 * @cmp: pointer to the function
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	for (i = 0; i < size; i++)
	if (cmp(array[i]))
		return (i);
	if (size <= 0)
		return (-1);
		else
			return (-1);
}
