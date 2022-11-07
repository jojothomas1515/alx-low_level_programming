#include "main.h"

/**
 * alloc_grid - done
 * @width: width
 * @height: height
 * Return: return pointer to a pointer
 */


int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int) * height + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(sizeof(int) * width + 1);
	}

	if (ptr == NULL)
		return (NULL);

	for(i = 0;i < height; i++)
	{
		for (j = 0; j < width;j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
