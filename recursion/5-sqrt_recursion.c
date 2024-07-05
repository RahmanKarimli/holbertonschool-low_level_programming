#include "main.h"
/**
 * find_root - calculates i**i to check with n.
 * _sqrt_recursion - entry point.
 * @n: base number.
 * @i: iterator number.
 * @n: integer
 * Return: i.
 */
int root(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (root(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (root(n, 2));
}
