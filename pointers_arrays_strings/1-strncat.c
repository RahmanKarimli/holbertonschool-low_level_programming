#include "main.h"
/**
 * _strncat - Entry point
 * @src: string
 * @dest: string
 * @n: integer
 * Return:0
 */
char *_strncat(char *dest, char *src, int n)
{
	int lend, lens, i;

	lend = 0;
	lens = 0;
	for (lend = 0; dest[lend] != '\0'; lend++)
	{
	}
	for (lens = 0; src[lens] != '\0'; lens++)
	{
	}
	for (i = 0; i <= n - 1; i++)
	{
		if (lens < 1)
		{
			break;
		}
		*(dest + lend) = *(src + i);
		lend++;
	}
	dest[lend] = '\0';
	return (dest);
}
