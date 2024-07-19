#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
  * print_numbers - ...
  * @n: count
  * @seperator: seperator
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arr;
	unsigned int i;
	int num;

	if (n == 0)
	{
		exit(0);
	}
	va_start(arr, n);
	num = va_arg(arr, int);
	printf("%d", num);
	for(i = 0; i < n-1; i++)
	{
		num = va_arg(arr, int);
		if (separator == NULL)
		{
			printf("%d", num);
			continue;
		}
		printf("%s%d", separator, num);
	}
	printf("\n");
	va_end(arr);
}
