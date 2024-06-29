#include "main.h"
/**
 * _strncpy - Entry point
 * @src: string
 * @dest: string
 * @n: integer
 * Return:0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, lens;

	for (lens = 0; src[lens] != '\0'; lens++)
	{
	}
	for (i = 0; i < n; i++)
	{
		if (lens < 1)
		{
			break;
		}
	dest[i] = src[i];
	}
	return (dest);
}
