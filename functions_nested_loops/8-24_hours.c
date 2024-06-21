#include "main.h"
/**
 * jack_bauer - Entry point
 * Return:0
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 2; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
		putchar((hour / 10) + '0');
		putchar((hour % 10) + '0');
		putchar(':');
		putchar((minute / 10) + '0');
		putchar((minute % 10) + '0');
		putchar('\n');
		}
	}
}
