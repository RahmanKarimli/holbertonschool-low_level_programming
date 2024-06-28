#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * @a: pointer
 * @n: integer
 * Return:0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (n - 1 != i)
		{
			printf(", ");
		}
	}
	printf("\n");
}
