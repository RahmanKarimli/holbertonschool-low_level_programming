#include "main.h"
/**
 * get_bit - ...
 * @n: ...
 * @index: ...
 *
 * Return: ...
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 8 - 1;
	if (n < index)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
