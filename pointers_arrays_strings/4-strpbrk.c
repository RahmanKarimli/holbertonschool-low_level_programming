#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: string
 * @accept: string
 * Return:0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int len;
	int ln;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (ln = 0; s[ln] != '\0'; ln++)
	{
	}
	for (i = 0; i <= len; i++)
	{
		for (j = 0; j <= ln; j++)
		{
			if (s[i] == accept[i])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
