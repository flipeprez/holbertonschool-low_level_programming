#include "search_algos.h"


/**
 * linear_search - look for a value in an array.
 * @array: list of integers.
 * @size: size of the array.
 * @value: value that the algorithm try to find.
 * Return: index in which value is located in the array.
 * if value is not found return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t indx;

	if (array == NULL)
		return (-1);

	for (indx = 0; indx <= size - 1; indx++)
	{
		printf("Value checked array[%lu] = [%d]\n", indx, array[indx]);
		if (array[indx] == value)
			return (indx);
	}
		return (-1);
}
