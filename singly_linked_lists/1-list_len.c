#include "lists.h"
/**
 * list_len - ...
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t list_len(const list_t *h)
{
	int len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
