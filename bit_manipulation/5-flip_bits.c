#include "main.h"
/**
 * flip_bits - ...
 * @n: ...
 * @m: ...
 *
 * Return: ...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;
	unsigned long int count = 0;
	unsigned long int size = sizeof(n) * 8;

	while (i < size)
	{
		if ((n & 1) != (m & 1))
		{
			count++;
		}
		n = n >> 1;
		m = m >> 1;
		i++;
	}
	return (count);
}
