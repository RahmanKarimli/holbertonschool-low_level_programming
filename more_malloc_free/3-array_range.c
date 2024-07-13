#include <stdlib.h>
#include "main.h"
/**
 * array_range - entry point.
 * @min: integer
 * @max: integer
 * Return: array.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, j;

	j = 0;
	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		array[j] = i;
		j++;
	}
	return (array);
}
