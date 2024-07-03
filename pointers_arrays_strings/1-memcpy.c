#include "main.h"
/**
 * _memcpy - Entry point
 * @n: integer
 * @dest: array
 * @src: array
 * Return:0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
