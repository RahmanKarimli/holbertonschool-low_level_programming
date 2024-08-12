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
	unsigned int size = sizeof(*n) * 8;
	unsigned long int mask;

	if (index > size)
	{
		return (-1);
	}
	mask = 1 << index;
	*n = *n | mask;
	return (1);
}
