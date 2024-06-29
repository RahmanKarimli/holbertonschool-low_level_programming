#include "main.h"
/**
 * reverse_array - Entry point
 * @a: array
 * @n: integer
 * Return:0
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
