#include <stdlib.h>
#include "main.h"
/**
 * str_concat - entry point.
 * @s1: string
 * @s2: string
 * Return: i.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, j = 0, len = 0, len2 = 0;

	if (s1)
	{
		for (; s1[len] != 0; len++)
		{
		}
	}
	if (s2)
	{
		for (; s2[len2] != 0; len2++)
		{
		}
	}
	concat = malloc(sizeof(char) * (len + len2 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	if (s1)
	{
		for (i = 0; i < len; i++)
		{
			concat[i] = s1[i];
		}
	}
	if (s2)
	{
		for (j = 0; j < len2; j++)
		{
			concat[i + j] = s2[j];
		}
	}
	return (concat + '\0');
}
