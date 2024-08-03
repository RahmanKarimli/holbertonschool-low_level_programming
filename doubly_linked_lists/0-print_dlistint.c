#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include "lists.h"
/**
 * print_dlistint - ...
 * @h: ...
 *
 * Return: ...
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
