#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range- creates an array of integers
 * @min: value name
 * @max: value name
 *
 * Return: array of integer.
 */
int *array_range(int min, int max)
{
	int a, *d;

	if (min > max)
		return (NULL);

	d = malloc(((max - min) + 1) * sizeof(int));

	if (d == 0)
		return (NULL);

	for (a = 0; a < ((max - min) + 1); a++)

		d[a] = min + a;

	return (d);

}
