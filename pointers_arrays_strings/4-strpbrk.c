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
	/**
	 * int len;
	*int ln;

	*for (len = 0; s[len] != '\0'; len++)
	*{
	*}
	*for (ln = 0; s[ln] != '\0'; ln++)
	*{
	*}
	*/
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
