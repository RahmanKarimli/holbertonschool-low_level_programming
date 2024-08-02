#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include "lists.h"
/**
 * free_list - ...
 * @head: ...
 *
 * Return: ...
 */
void free_list(list_t *head)
{
	list_t *tmp;
	while (head->next)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
