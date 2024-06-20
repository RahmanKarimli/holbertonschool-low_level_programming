#include "main.h"

/**
 * _islower - Entry point
 * Return:0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		_putchar(1);
		_putchar('\n');
	}

	else
	{
		_putchar(0);
		_putchar('\n');
	}
}
