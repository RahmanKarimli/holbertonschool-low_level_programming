#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include "lists.h"
/**
 * add_node_end - ...
 * @head: ...
 * @str: ...
 *
 * Return: ...
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;
	int len;

	tmp = *head;
	for (len = 0; str[len]; len++)
	{
	}
	new = malloc(sizeof(size_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->len = len;
	new->str = strdup(str);
	new->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = new;
		return (new);
	}
	while(tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (tmp);
}
