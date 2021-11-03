#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: the integer to iterate
 * @size: size of the array
 * @action: function used.
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action)
	for (i = 0; i < size; i++)
		action(array[i]);

}
