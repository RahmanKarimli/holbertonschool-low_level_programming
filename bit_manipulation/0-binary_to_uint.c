#include "main.h"
/**
 * binary_to_uint - ...
 * @b: ...
 *
 * Return: ...
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		result = result << 1;
		if (b[i] == '1')
		{
			result = result | 1;
		}
		else if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	return (result);
}
