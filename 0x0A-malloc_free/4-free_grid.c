#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a previously created 2D array
 * @grid: The grid to be freed
 * @height: The height of the grid to be freed
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return;
	while (height > 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}
