#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *free_grid - liberate memory from grid
 *@grid:two dimensional grid
 *@height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)

		free(grid[i]);
	free(grid);

}
