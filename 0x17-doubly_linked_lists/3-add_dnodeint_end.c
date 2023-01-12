#include "lists.h"

/**
 * add_dnodeint_end - add a doubly linked list node at the end of the list
 * @head: head node of the linked list
 * @n: value of the new node
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_n = NULL, *c_n = NULL;

	if (head == NULL)
		return (NULL);

	n_n = malloc(sizeof(dlistint_t));
	if (n_n == NULL)
		return (NULL);
	n_n->n = n;
	n_n->next = NULL;
	n_n->prev = NULL;

	c_n = (*head);
	if (c_n == NULL)
	{
		(*head) = n_n;
		return (n_n);
	}

	while (c_n)
	{
		if (c_n->next == NULL)
		{
			c_n->next = n_n;
			n_n->prev = c_n;
			return (n_n);
		}
		c_n = c_n->next;
	}

	free(n_n);
	return (NULL);
}
