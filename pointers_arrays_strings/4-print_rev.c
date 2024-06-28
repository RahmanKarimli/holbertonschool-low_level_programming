#include <stdio.h>
#include "main.h"
/**
 * print_rev - Entry point
 * @s: string
 * Return:0
 */
void print_rev(char *s)
{
	int len, i;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 1; i <= len; i++)
	{
		_putchar(s[len - i]);
	}
}
