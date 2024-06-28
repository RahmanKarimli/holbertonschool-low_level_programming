#include "main.h"
/**
 * rev_string - Entry point
 * @s: string
 * Return:0
 */
void rev_string(char *s)
{
	int len, i;
	char temp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 1; i < len / 2 + 1 ; i++)
	{
		temp = s[i - 1];
		*(s + (i - 1)) = s[len - i];
		*(s + (len - i)) = temp;
	}
}
