#include <stdio.h>
#include <stdarg.h>
/**
  * sum_them_all - ...
  * @n: count
  * Return: integer
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int num, i, sum;
	va_list arr;
	va_start(arr, n);

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
	{
		num = va_arg(arr, unsigned int);
		sum += num;
	}
	return (sum);
}
