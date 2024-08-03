#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * sum_dlistint - ...
 * @head: ...
 *
 * Return: ...
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int i, sum;

	sum = 0;
	tmp = head;
	for (i = 0; tmp; i++)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
