#include "main.h"
/**
 * _strspn - Entry point
 * @s: string
 * @accept: string
 * Return:0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (len);
}
