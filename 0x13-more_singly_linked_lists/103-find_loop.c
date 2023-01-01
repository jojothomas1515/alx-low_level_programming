#include "lists.h"

/**
 * find_listint_loop - find the loop in linked list
 * @head: head node
 * Return: the address of the loop node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *n_node, *t_node;

	if (head == NULL)
		return (NULL);
	if (head == head->next)
		return (head);
	n_node = head;

	while (n_node != NULL)
	{
		t_node = head;
		if (n_node == n_node->next)
			return (n_node);
		while (n_node != t_node)
		{
			if (t_node == n_node->next)
				return (t_node);
			t_node = t_node->next;
		}
		n_node = n_node->next;
	}
	return (NULL);
}
