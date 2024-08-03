#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "lists.h"
/**
 * add_dnodeint_end - ...
 * @head: ...
 * @n: ...
 *
 * Return: ...
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	tmp = (*head);
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		(*head) = new;
		return (new);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (tmp);
}
