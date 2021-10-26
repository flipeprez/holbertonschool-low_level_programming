#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - return a pointer to a 2 dimensional array of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **p;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);

		if (p == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == 0)

		for (; i >= 0; i--)
		{
			free(p[i]);
		}

		free(p);
		return (0);


	}

	return (p);


}
