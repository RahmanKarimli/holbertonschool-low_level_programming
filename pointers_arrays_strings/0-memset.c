#include "main.h"
/**
 * _memset - Entry point
 * @s: array
 * @b: string
 * @n: integer
 * Return:0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
