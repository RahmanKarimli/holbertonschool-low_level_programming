#include "main.h"

/**
 * print_sign - Entry point
 * @n: integer
 * Return:0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (n > 0);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
