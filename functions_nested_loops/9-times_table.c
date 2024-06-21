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

		putchar('0');
		for (j = 1; j < 10; j++)
		{
			putchar(',');
			putchar(' ');
			temp = i * j;

			if (temp < 10)
			{
				putchar(' ');
			}
			else
			{
				putchar((temp / 10) + '0');
			}
			putchar((temp % 10) + '0');
		}
	putchar('\n');
	}
}
