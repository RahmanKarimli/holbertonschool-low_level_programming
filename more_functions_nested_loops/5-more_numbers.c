#include "main.h"
/**
 * more_numbers - Entry point
 * Return:0
 */
void more_numbers(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 15; i++)
		{
			if (((i / 10) + '0') > '0')
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n')
	}
}
