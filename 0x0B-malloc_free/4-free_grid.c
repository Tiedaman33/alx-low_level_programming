#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function that frees 2D array grid
 * @grid: adress of 2d array
 * @height: height of grid
 *
 * Return nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
