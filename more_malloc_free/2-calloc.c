#include <stdlib.h>
#include "main.h"
/**
 * _calloc - entry point.
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: i.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = calloc(nmemb, size * nmemb);
	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}
