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
	if (n < index)
	{
		return (-1);
	}
	return ((n >> index) &1);
}
