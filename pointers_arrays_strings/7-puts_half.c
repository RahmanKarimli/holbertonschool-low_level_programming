#include "main.h"
/**
 * puts_half - Entry point
 * @str: string
 * Return:0
 */
void puts_half(char *str)
{
	int i, n, len;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
