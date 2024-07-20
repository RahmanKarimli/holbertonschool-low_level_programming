#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
  * print_all - ...
  * @format: format
  * Return: void
  */
void print_all(const char * const format, ...)
{
	va_list arr;
	char *str, *sep;
	int i;

	va_start(arr, format);
	i = 0;
	sep = "";
	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(arr, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(arr, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(arr, double));
					break;
				case 's':
					str = va_arg(arr, char *);
					if (str == NULL)
					{
						str = "(nil)";
					}
					printf("%s%s", sep, str);
					break;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(arr);
}
