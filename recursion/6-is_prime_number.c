#include "main.h"
/**
 * multiple - entry point.
 * @n: base number.
 * @i: iterator number.
 * Return: i.
 */
int multiple(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (multiple(n, i + 1));
	}
}
/**
 * is_prime_number - entry point.
 * @n: base number.
 * Return: i.
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (multiple(n, 2));
	}
}
