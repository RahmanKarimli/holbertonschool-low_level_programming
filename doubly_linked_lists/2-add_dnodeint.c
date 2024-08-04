#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include "lists.h"
/**
 * add_dnodeint - ...
 * @head: ...
 * @n: ...
 *
 * Return: ...
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *frontnode = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (frontnode == NULL)
	{
		return (NULL);
	}
	frontnode->n = n;
	frontnode->prev = NULL;
	frontnode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = frontnode;
	}
	*head = frontnode;

	return (frontnode);
}
