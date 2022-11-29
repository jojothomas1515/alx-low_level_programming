#include "lists.h"

/**
 * add_nodeint - and node to the beginning of the list
 * @head: pointer to the node pointer
 * @n: the value to be added to the list
 * Return the address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node_ptr;
	listint_t *old_node_ptr = *head;

	if (old_node_ptr == NULL)
	{
		old_node_ptr = malloc(sizeof(listint_t));
		old_node_ptr->n = n;
		old_node_ptr->next = NULL;
		*head = old_node_ptr;
		return (*head);
	}

	new_node_ptr = malloc(sizeof(listint_t));
	new_node_ptr->n = n;
	new_node_ptr->next = old_node_ptr;
	*head = new_node_ptr;
	return (*head);
}
