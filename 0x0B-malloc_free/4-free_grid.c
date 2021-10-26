#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - return a pointer to a 2 dimensional array of integers
 * @grid: size of grid
 * @height: height of the grid
 *
 * Return: 2 dimensional array of integers.
 */
void free_grid(int **grid, int height)
{
	int i;


	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

		free(grid);


}
