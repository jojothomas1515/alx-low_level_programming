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
	return ((size_t) counts);
}

/**
 * insert_dnodeint_at_index - insert node at a certain index;
 * @h: pointer to head node pointer
 * @idx: index
 * @n: node value
 * Return: new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	int len = (int) dlistint_len((*h));
	dlistint_t *cn = NULL, *nn = NULL;
	unsigned int counts = 0;

	if (h == NULL)
		return (NULL);

	if (((*h) == NULL && (int) idx == 0) || ((*h) != NULL && (int) idx == 0))
		return (add_dnodeint(h, n));
	if ((*h) == NULL && (int) idx > 0)
		return (NULL);
	if ((int) idx == (len))
		return (add_dnodeint_end(h, n));
	if ((int) idx > len)
		return (NULL);

	nn = malloc(sizeof(dlistint_t));
	if (nn == NULL)
		return (NULL);
	nn->n = n;
	nn->next = NULL;
	nn->prev = NULL;

	cn = (*h);

	for (counts = 0; counts < idx && cn; counts++)
	{
		cn = cn->next;
	}

	if (cn == NULL)
	{
		free(nn);
		return (NULL);
	}

	nn->next = cn;
	nn->prev = cn->prev;
	cn->prev = nn;
	if (nn->prev)
		nn->prev->next = nn;

	return (nn);
}
