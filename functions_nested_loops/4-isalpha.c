#include "main.h"

/**
 * _isalpha - Entry point
 * Return:0
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
