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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[i])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
