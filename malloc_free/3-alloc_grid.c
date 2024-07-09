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
	int w, h;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	for (h = 0; h < height; h++)
	{
		array[h] = malloc(sizeof(int) * width);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			array[h][w] = 0;
		}
	}
	return (array);
}
