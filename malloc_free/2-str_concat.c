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
	int len;
	int len2;
	char *concat;
	int i, j;

	concat = malloc(sizeof(char) * (len + len2 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	if (s1)
	{
		for (len = 0; s1[len] != 0; len++)
		{
		}
		for (i = 0; i < len; i++)
		{
			concat[i] = s1[i];
		}
	}
	if (s2)
	{
		for (len2 = 0; s2[len2] != 0; len2++)
		{
		}
		for (j = 0; j <= len2; j++)
		{
			concat[i + j] = s2[j];
		}
	}
	return (concat);
}
