#include "main.h"
/**
 * leet - Entry point
 * @s: string
 * Return:0
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = {'A', 'E', 'O', 'T', 'L'};
	char nums[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == letters[j] || s[i] == letters[j] + 32)
				*(s + i) = nums[j];
		}
	}
	return (s);
}
