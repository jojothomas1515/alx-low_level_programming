#include "lists.h"

/**
 * sum_dlistint - sum of all the data n in a list
 * @head: head node pointer
 * Return: sum of n 
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *c_n = NULL;
	int acc = 0;

	if (head == NULL)
		return (0);

	c_n = head;

	while (c_n)
	{
		acc += c_n->n;
		c_n = c_n->next;
	}

	return (acc);
}
