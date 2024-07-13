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
	unsigned int len, i, j;

	len1 = 0;
	len = 0;
	if (s1 == NULL && s2 != NULL)
	{
		for (len = 0; s2[len] != '\0'; len++)

	}
	else if (s2 == NULL && s1 != NULL)
	{
		for (len1 = 0; s1[len1] != '\0'; len1++)

	}
	if (n >= len)
	{
		array = malloc(len1 + len + 1);
	}
	else
	{
		array = malloc(len1 + n + 1);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL && s2 == NULL)
	{
		array[0] = '\0';
		return (array);
	}
	if (s1 == NULL && s2 != NULL)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			array[j] = s1[j];
		}
		array[j] = '\0';
		return (array);
	}
	else if (s2 == NULL && s1 != NULL)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			array[j] = s1[j];
		}
		array[j] = '\0';
		return (array);
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
	for (j = 0; s1[j] != '\0'; j++)
	{
		array[j] = s1[j];
	}
	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		array[j] = s2[i];
		j++;
	}
	array[j] = '\0';
	return (array);
}
