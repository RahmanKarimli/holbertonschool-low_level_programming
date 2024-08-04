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
	dlistint_t *th1node = (dlistint_t *) malloc(sizeof(dlistint_t));
	dlistint_t *th2node;

	th2node = *head;
	if (th1node == NULL)
	{
		return (NULL);
	}

	th1node->n = n;
	th1node->next = NULL;

	if (*head == NULL)
	{
		th1node->prev = NULL;
		*head = th1node;
		return (th1node);
	}

	while (th2node->next != NULL)
	{
		th2node = th2node->next;
	}

	th2node->next = th1node;
	th1node->prev = th2node;

	return (th1node);
}
