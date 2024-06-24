#include "main.h"
/**
 * _isdigit - Entry point
 * @n: integer
 * Return:0
 */
int _isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	else
		return (0);
}
