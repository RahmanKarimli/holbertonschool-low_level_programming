#include "main.h"
/**
 * cap_string - Entry point
 * @s: string
 * Return:0
 */
char *cap_string(char *s)
{
	int i, j;
	char seps[] = {' ', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; seps[j] != '\0'; j++)
		{
			if (s[i] == seps[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					*(s + (i + 1)) = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
