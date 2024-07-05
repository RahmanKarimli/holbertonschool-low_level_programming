#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: string
 * @needle: string
 * Return:0
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; haystack[i + j] == needle[j]; j++)
		{
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
