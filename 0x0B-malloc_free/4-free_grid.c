#include "main.h"

/**
 * free_grid - free memory of a 2d array
 * @grid: multidimensional
 * @height: the height of the array
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	int i, j;
	int len = sizeof(*(grid));

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < len; j++)
		{
			free(&grid[i][j]);
		}
	}
}
