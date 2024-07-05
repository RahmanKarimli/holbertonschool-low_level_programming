#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Entry point
 * @a: array
 * Return:0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int s;
	int s2;

	s = 0;
	s2 = 0;
	for (i = 0; i < size; i++)
	{
		s += *(a + i * size + i);
	}
	for (i = 0; i < size; i++)
	{
		s2 += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d", s, s2);
	printf("\n");
}
