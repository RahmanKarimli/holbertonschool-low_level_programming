#include "main.h"
/**
 * print_binary - ...
 * @n: ...
 *
 * Return: ...
 */
void print_binary(unsigned long int n)
{
	int current, i, flag = 0;
	unsigned long int result = 0;
	for (i = 31; i >= 0; i--)
	{
		result = n >> i;
		current = result & 1;
		if (current)
		{
			flag = 1;
		}
		if (flag || (n==0 && i == 0))
		{
			putchar(current + '0');
		}
	}
}
