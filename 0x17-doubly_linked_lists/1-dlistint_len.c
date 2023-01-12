#include "lists.h"

/**
 * dlistint_len - compute the length of a doubly linked list
 * @h: head node of the linked list
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr_node;
	int counts = 0;

	if (h == NULL)
		return (0);

	curr_node = h;

	while (curr_node)
	{
		counts++;
		curr_node = curr_node->next;
	}
	return ((size_t)counts);
}
