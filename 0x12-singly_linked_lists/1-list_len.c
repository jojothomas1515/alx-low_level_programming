#include "lists.h"

/**
 * list_len - returns the lenght of linked list
 * @h: address of the head node
 * Return: length
 */

size_t list_len(const list_t *h)
{
	_u_int count = 1;

	if (h == NULL)
		return (0);
	if (h->next != NULL)
	{
		count += list_len(h->next);
	}
	return (count);
}
