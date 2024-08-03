#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_dlistint - ...
 * @head: ...
 *
 * Return: ...
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head->next)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
