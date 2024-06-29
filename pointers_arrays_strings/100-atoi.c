#include "main.h"
/**
 * _atoi - Entry point
 * @s: string
 * Return:0
 */
int _atoi(char *s)
{
	int i, len, num, f, d, digit;

	num = 0;
	f = 0;
	d = 0;
	i = 0;
	for (len = 0; s[len] != '\0'; len++)
	{
	}
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			d++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			num = num * 10 + digit;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				f = 1;
			else
				f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (num);
}
