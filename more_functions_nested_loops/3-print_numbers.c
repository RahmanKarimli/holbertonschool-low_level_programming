#include "main.h"
/**
 * print_numbers - Entry point
 * Return:0
 */
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
