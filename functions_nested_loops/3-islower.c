#include "main.h"

/**
 * _islower - Entry point
 * Return:0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		_putchar('\n');
		return (1);
	}

	else
	{
		_putchar('\n');
		return (0);
	}
}
