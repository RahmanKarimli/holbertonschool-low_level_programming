#include "main.h"
/**
 * print_times_table - Entry point
 * @n: integer
 * Return:0
 */
void print_times_table(int n)
{
	int i, j, tmp;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		putchar('0');

		for (j = 1; j <= n; j++)
		{
			putchar(',');
			putchar(' ');
			tmp = i * j;
			if (tmp < 100 && tmp > 9)
			{
				putchar(' ');
				putchar((tmp / 10) + '0');
				putchar((tmp % 10) + '0');
			}

			else if (tmp < 10)
			{
				putchar(' ');
				putchar(' ');
				putchar(tmp + '0');
			}

			else
			{
				putchar((tmp / 100) + '0');
				int rmn = tmp % 100;

				putchar((rmn / 10) + '0');
				putchar((rmn % 10) + '0');
			}
		}
		putchar('\n');
	}
}
