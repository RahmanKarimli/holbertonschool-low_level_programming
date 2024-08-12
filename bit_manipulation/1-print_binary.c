#include "main.h"
/**
 * print_binary - ...
 * @n: ...
 *
 * Return: ...
 */
void print_binary(unsigned long int n)
{
	int current, i, size, flag = 0;
	unsigned long int result = 0;

	size = sizeof(n) * 8 - 1;
	for (i = size; i >= 0; i--)
	{
		result = n >> i;
		current = result & 1;
		if (current)
		{
			flag = 1;
		}
		if (flag || (n == 0 && i == 0))
		{
			putchar(current + '0');
		}
	}
}
