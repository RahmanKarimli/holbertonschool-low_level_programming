#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - entry point.
 * @s1: string
 * @s2: string
 * @n: unsigned integer
 * Return: i.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	int len, i, j;

	for (len = 0; s2[len] != '\0'; len++)

	array = malloc(sizeof(s1) + sizeof(s2) * n);
	if (array == NULL)
	{
		return (NULL);
	}
	for (j = 0; s1[j] != '\0'; j++)
	{
		array[j] = s1[j];
	}
	if (len <= n)
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			array[j] = s2[i];
			j++;
		}
		return (array);
	}
	for (i = 0; i < n; i++)
	{
		array[j] = s2[i];
		j++;
	}
	array[j] = '\0';
	return (array);
}
