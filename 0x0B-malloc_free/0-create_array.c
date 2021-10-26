#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - prints buffer in hexa
 * @c: value name
 * @size: the size of the memory to print
 *
 * Return:create an array of chars, and inizialies with a specific char.
 */
char *create_array(unsigned int size, char c)
{
	char *va;

	unsigned int nva;

	va = malloc(c * sizeof(char));

	if (va)
	{
	for (nva = 0; nva <= size; size++)
	{
		if (size == 0)
		{
			return (0);
		}
		else
			return (va);
	}
	}
	return (0);
}
