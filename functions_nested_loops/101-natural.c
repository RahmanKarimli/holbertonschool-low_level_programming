#include <stdio.h>

/**
  * main - Prints the sum of all multiples of 3 or 5 up to 1024
  *
  * Return: Always (Success)
  */
int main(void)
{
	int i, n;

	for (i = 2; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			n += i;
	}
	printf("%d\n", n);
}
