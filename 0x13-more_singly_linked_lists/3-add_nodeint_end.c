#include "lists.h"

/* This answer was written by jojo thomas*/

/**
 * add_nodeint_end - add node to the end of the linked list
 * @head: pointer to the pointer of the head node
 * @n: value of the node to be created
 * Return: the address of the new node if successful
 * or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *head_node_ptr = *head;
	listint_t *new_node_ptr;

	if (head_node_ptr == NULL)
	{
		head_node_ptr = malloc(sizeof(listint_t));
		if (head_node_ptr == NULL)
			return (NULL);
		head_node_ptr->n = n;
		head_node_ptr->next = NULL;
		return (head_node_ptr);
	}

	new_node_ptr = malloc(sizeof(listint_t));
	if (new_node_ptr == NULL)
		return (NULL);
	new_node_ptr->next = NULL;
	new_node_ptr->n = n;

	while (head_node_ptr->next)
		head_node_ptr = head_node_ptr->next;
	head_node_ptr->next = new_node_ptr;
	return (new_node_ptr);
}
