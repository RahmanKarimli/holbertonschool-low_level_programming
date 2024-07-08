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
	int len;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != 0; len++)
	{
	}
	array = malloc(sizeof(char) * len + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		array[i] = str[i];
	}
	array[i] = str[i];
	return (array);
}
