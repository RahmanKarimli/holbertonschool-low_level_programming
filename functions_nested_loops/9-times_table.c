#include "main.h"
/**
 * times_table - Entry point
 * Return:0
 */
void times_table(void)
{
	int i;
	int j;
	int temp;

	for (i = 0; i < 10; i++)
	{
		temp = 0;

		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			temp = i * j;

			if (temp < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((temp / 10) + '0');
			}
			_putchar((temp % 10) + '0');
		}
	_putchar('\n');
	}
}
