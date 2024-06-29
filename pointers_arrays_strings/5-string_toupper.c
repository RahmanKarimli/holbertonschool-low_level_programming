#include "main.h"
/**
 * string_toupper - Entry point
 * @a: array
 * Return:0
 */
char *string_toupper(char *a)
{
	int i, len;

	for (len = 0; a[len] != '\0'; len++)
	{
	}
	for (i = 0; i < len; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			*(a + i) = a[i] - 32;
		}
		else
		{
			*(a + i) = *(a + i);
		}
	}
	return (a);
}
