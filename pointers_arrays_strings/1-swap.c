#include <stdio.h>
#include "main.h"
/**
 * swap_int - Entry point
 * @a: integer
 * @b: integer
 * Return:0
 */
void swap_int(int *a, int *b)
{
        int c;

	c = *a;
	*a = *b;
	*b = c;
}
