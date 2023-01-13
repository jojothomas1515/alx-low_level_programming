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

/**
 * delete_dnodeint_at_index - deletes node at a certain index
 * @head: head node
 * @index: target index
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cn = NULL, *tn = NULL;
	int len = dlistint_len((*head)) - 1, counts = 0;

	if (head == NULL || (*head) == NULL)
		return (-1);
	cn = (*head);

	if ((int)index > len)
		return (-1);

	if ((int)index == 0)
	{
		(*head) = cn->next;
		(*head)->prev = NULL;
		free(cn);
		return (1);
	}

	while (cn)
	{
		if (index == counts)
		{
			cn->prev->next = cn->next;
			cn->next->prev = cn->prev;
			free(cn);
			return (1);
		}
		cn = cn->next;
	}
	return (-1);
}
