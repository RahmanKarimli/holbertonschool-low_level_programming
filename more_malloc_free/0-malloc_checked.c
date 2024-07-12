#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - entry point.
 * @b: unsinged integer
 * Return: i.
 */
void *malloc_checked(unsigned int b)
{
	int *array;

	array = malloc(b);
	if (array == NULL)
	{
		exit(98);
	}
	return (array);
}
