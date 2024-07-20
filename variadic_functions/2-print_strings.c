#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
  * print_strings - ...
  * @n: count
  * @separator: separator
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arr;
	char *str;

	if (n == 0)
	{
		printf("\n");
		exit(0);
	}
	va_start(arr, n);
	str = va_arg(arr, char *);
	printf("%s", str);
	for (i = 0; i < n - 1; i++)
	{
		str = va_arg(arr, char *);
		if (str == NULL)
		{
			if (separator == NULL)
			{
				continue;
			}
			printf("%s(nil)", separator);
			continue;
		}
		if (separator == NULL)
		{
			printf("%s", str);
			continue;
		}
		printf("%s%s", separator, str);
	}
	printf("\n");
}
