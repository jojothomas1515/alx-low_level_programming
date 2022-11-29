#include "lists.h"

/**
 * free_listint2 - free the linked list and set head to NULL
 * @head: pointer to the pointer of n the first/head node
 */

void free_listint2(listint_t **head)
{
	listint_t *curr_node, *temp;

	/* check to see if head points to a node else do nothing */
	if (*head != NULL)
	{
		curr_node = *head;

		while (curr_node)
		{
			temp = curr_node;
			curr_node = curr_node->next;
			free(temp);
		}
		free(curr_node);
	}
}
