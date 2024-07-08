#include <stdlib.h>
#include "main.h"
/**
 * _strdup - entry point.
 * @str: string
 * Return: i.
 */
char *_strdup(char *str)
{
	char *array;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * sizeof(str));
	for (i = 0; str[i] != '\0'; i++)
	{
		array[i] = str[i];
	}
	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}
