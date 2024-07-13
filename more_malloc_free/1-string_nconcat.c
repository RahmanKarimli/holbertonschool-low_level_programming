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
	unsigned int i, j, len, len1;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len = 0; s2[len] != '\0'; len++)
	{
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	if (n >= len)
	{
		n = len;
	}
	array  = malloc(n + len1 + 1);
	if (array == NULL)
	{
		return (NULL);
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
