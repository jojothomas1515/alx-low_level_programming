#include "main.h"

/**
 * free_grid - free memory of a 2d array
 * @grid: multidimensional
 * @height: the height of the array
 * Return: Void
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
