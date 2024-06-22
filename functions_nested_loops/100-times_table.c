#include "main.h"
/**
 * print_times_table - Entry point
 * @n: integer
 * Return:0
 */
void print_times_table(int n)
{
	int i, j, tmp, rmn;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');

		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			tmp = i * j;
			if (tmp < 100 && tmp > 9)
			{
				_putchar(' ');
				_putchar((tmp / 10) + '0');
				_putchar((tmp % 10) + '0');
			}

			else if (tmp < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(tmp + '0');
			}

			else
			{
				_putchar((tmp / 100) + '0');
				rmn = tmp % 100;
				_putchar((rmn / 10) + '0');
				_putchar((rmn % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
