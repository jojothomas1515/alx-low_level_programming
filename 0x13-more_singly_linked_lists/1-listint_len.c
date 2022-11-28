#include "lists.h"

/**
 * listint_len - computes the length of the linked list
 * @h: address in memory of  the list
 * Return: length of the list
 */

size_t listint_len(const listint_t *h)
{
	_u_int count = 1;

	if (h == NULL)
		return (0);

	while ((h = h->next))
		count++;

	return (count);
}
