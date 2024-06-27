#include <stdio.h>
#include "main.h"
/**
 * _strlen - Entry point
 * @s: char
 * Return:0
 */
int _strlen(char *s)
{
	int len;
	
	len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);
}
