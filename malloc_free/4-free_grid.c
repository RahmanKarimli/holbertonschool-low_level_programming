#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * free_grid - frees array
 * @height: width of the matrix
 * @**grid: 2D array
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL || height ==0)
		return;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
