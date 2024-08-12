#include "main.h"
/**
 * clear_bit - ...
 * @n: ...
 * @index: ...
 *
 * Return: ...
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(*n) * 8;
	unsigned int mask;

	if (index > size)
	{
		return (-1);
	}
	*n = ~(*n);
	mask = 1 << index;
	*n = *n | mask;
	*n = ~(*n);
	return (1);
}
