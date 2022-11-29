#include "lists.h"

/**
 * free_listint - the the memory occupied by nodes in a linked list
 * @head: the point the first/head node
 */
void free_listint(listint_t *head)
{
	listint_t *curr_node, *temp;

	if (head == NULL)
		exit(EXIT_SUCCESS);
	curr_node = head;

	/* iterate through the linked list and free each node */
	while (curr_node)
	{
		temp = curr_node;
		curr_node = curr_node->next;
		free(temp);
	}
	free(curr_node);
	exit(EXIT_SUCCESS);
}
