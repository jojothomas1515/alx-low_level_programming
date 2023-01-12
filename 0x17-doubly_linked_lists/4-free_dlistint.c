#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head node pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *c_n = NULL, *t_n = NULL;

	if (head == NULL)
		return;

	c_n = head;

	while (c_n)
	{
		t_n = c_n;
		c_n = c_n->next;
		free(t_n);
	}

	head = NULL;
}