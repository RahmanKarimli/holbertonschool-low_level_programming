#include "main.h"
/**
 * puts_half - Entry point
 * @str: string
 * Return:0
 */
void puts_half(char *str)
{
	int i, len;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len - 1) / 2; i < len - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
