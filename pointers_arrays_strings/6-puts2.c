#include "main.h"
/**
 * puts2 - Entry point
 * @str: string
 * Return:0
 */
void puts2(char *str)
{
	int i, len;

	len = 0;
	for (len = 0; str[len] != '\0'; len++)
	{
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
