#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - ...
 * @head: ...
 * @index: ...
 *
 * Return: ...
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	tmp = head;
	for (i = 0; i < index; i++)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (tmp->prev);
}
