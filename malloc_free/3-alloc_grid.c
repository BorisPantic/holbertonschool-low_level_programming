#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 **alloc_grid - give memory to two dimensional array of integer
 *@width: width of the array
 *@height: height of the array
 *Return: NULL or grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int iw;
	int ih;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (ih = 0; ih < height; ih++)
	{
		grid[ih] = malloc(sizeof(int) * width);
		if (grid[ih] == NULL)
		{
			for (iw = 0; iw < ih; iw++)

				free(grid[iw]);
			free(grid);
			return (NULL);
		}
		for (iw = 0; iw < width; iw++)
			grid[ih][iw] = 0;
	}
	return (grid);
}



