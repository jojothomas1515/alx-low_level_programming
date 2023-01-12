#include "lists.h"
/**
 * get_dnodeint_at_index - get node at a certain index
 * @head: head node pointer
 * @index: index to get
 * Return: indexed node on success, NULL on fail.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *c_n = NULL;
	int count = 0;

	if (head == NULL)
		return (NULL);

	c_n = head;

	while (c_n != NULL)
	{
		if (index == count)
		{
			return (c_n);
		}
		count++;
		c_n = c_n->next;
	}

	return (NULL);
}
