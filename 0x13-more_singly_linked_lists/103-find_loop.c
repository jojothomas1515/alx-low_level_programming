#include "lists.h"

/**
 * loop_finder - find the loop in linked list
 * @head: head node
 * return the address of the loop node
*/
const listint_t *loop_finder(const listint_t *head)
{
	const listint_t *c_node = head, *t_node;

	if (head == NULL)
		return (NULL);

	c_node = head->next;
	while (c_node != NULL)
	{
		t_node = head;
		while (t_node != c_node)
		{
			if (t_node == c_node->next)
				return (t_node);
			t_node = t_node->next;
		}
		c_node = c_node->next;
	}
	printf("\n");
	return (head);
}
