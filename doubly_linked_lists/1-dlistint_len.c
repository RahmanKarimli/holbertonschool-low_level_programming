#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include "lists.h"
/**
 * dlistint_len - ...
 * @h: ...
 *
 * Return: ...
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
