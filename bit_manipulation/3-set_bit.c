#include "main.h"
/**
 * set_bit - ...
 * @n: ...
 * @index: ...
 *
 * Return: ...
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8 - 1;
	if (index > size)
	{
		return (-1);
	}
	*n = *n >> index;
	*n = *n | 1;
	*n = *n << index;
	return (*n);
}
