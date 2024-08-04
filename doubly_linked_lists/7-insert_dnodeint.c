#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - ...
 * @h: ...
 * @idx: ...
 * @n: ...
 *
 * Return: ...
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *th1 = (dlistint_t *) malloc(sizeof(dlistint_t));
	dlistint_t *th2 = *h;

	if (th1 == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (; idx > 1; idx--)
	{
		th2 = th2->next;
		if (th2 == NULL)
		{
			return (NULL);
		}
	}

	if (th2->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	th1->n = n;
	th1->next = th2->next;
	th1->prev = th2;
	th2->next->prev = th1;
	th2->next = th1;

	return (th1);
}
