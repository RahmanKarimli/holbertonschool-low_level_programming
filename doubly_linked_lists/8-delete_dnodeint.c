#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - main
 * @head: clone of dblylink
 * @index: for iteration
 * Return: 1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *clone = *head;

	if (clone == NULL)
		return (-1);

	for (; index > 0; index--)
	{
		if (clone == NULL)
			return (-1);
		clone = clone->next;
	}

	if (clone == *head)
	{
		*head = clone->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		clone->prev->next = clone->next;
		if (clone->next != NULL)
			clone->next->prev = clone->prev;
	}

	free(clone);
	return (1);
}
