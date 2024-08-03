#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - ...
 * @head: ...
 * @idx: ...
 * @n: ...
 *
 * Return: ...
 */
dlistint_t *insert_nodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *tmp = *head;
	unsigned int i;
	dlistint_t *new;

	if (idx == 0)
	{
		return (add_dnodeint(head, n));
	}
	for (i = 0; tmp != NULL && i < idx - 1; i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		return (NULL);
	}
	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(head, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return NULL;
	}
	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
