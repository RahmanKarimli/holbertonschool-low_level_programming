#include "main.h"
/**
 * _strchr - Entry point
 * @s: string
 * @c: char
 * Return:0
 */
char *_strchr(char *s, char c)
{
	int i;
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{	
	}
	for (i = 0; i <= j; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
