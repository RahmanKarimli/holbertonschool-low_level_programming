#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include "lists.h"
/**
 * list_len - ...
 * @h: pointer to the list_t list to print
 * @head: list_t
 * @str: char
 *
 * Return: the number of nodes printed
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new;

	len = 0;
	while (str[len] != 0)
	{
		len++;
	}
	new  = malloc(sizeof(size_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	(*head) = new;
	return (*head);
}
