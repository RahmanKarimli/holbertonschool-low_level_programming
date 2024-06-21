#include "main.h"

/**
 * _abs - Entry point
 * @n: integer
 * Return:0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		_putchar('\n');
		return (n);
	}

	else
	{
		n = -1 * n;
		_putchar('\n');
		return (n);
	}
}
