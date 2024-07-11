#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - entry point.
 * @width: integer
 * @height: integer
 * Return: i.
 */
int **alloc_grid(int width, int height)
{
	int w, h, i;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		array[h] = malloc(sizeof(int) * width);
		if (array[h] == NULL)
		{
			free(array);
			for (i = 0; i < h; i++)
			{
				free(array[h]);
			}
		}
		for (w = 0; w < width; w++)
		{
			array[h][w] = 0;
		}
	}
	return (array);
}
