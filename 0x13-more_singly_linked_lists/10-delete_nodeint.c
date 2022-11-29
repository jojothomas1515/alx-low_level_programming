#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at target index
 * @head: pointer to the pointer of a the first/head node
 * @index: index of delete
 * Return: 1 if successful -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr_node, *prev_node_ptr, *head_node_ptr = *head;
	_u_int i = 0;

	if (head != NULL && *head != NULL)
	{
		curr_node = head_node_ptr;

		while (curr_node && i++ <= index)
		{
			prev_node_ptr = curr_node;
			curr_node = curr_node->next;
		}
		prev_node_ptr->next = curr_node->next;
		free(curr_node);
		return (1);
	}
	return (-1);
}
