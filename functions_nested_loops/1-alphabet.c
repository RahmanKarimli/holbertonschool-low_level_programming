#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;
	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('/n');
}
