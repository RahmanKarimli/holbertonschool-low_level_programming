#include "main.h"
/**
 * _strcat - Entry point
 * @src: string
 * @dest: string
 * Return:0
 */
char *_strcat(char *dest, char *src)
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
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[lend] = src[i];
		lend++;
	}
	dest[lend] = '\0';
	return (dest);
}
