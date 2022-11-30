#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at target index
 * @head: pointer to the pointer of a the first/head node
 * @index: index of delete
 * Return: 1 if successful -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *curr_node = *head;
	_u_int i = 0;

	(void)temp;
	if (index == 0 && curr_node != NULL)
	{
		if (curr_node->next)
			*head = curr_node->next;
		else
			*head = NULL;
		free(curr_node);
		return (1);
	}
	else if (index > 0 && curr_node != NULL)
	{
		while (curr_node && i++ < index - 1)
		{
			temp = curr_node;
			curr_node = curr_node->next;
		}
		temp->next = curr_node->next;
		if (curr_node != NULL)
			free(curr_node);
		return (1);
	}

	return (-1);
}
