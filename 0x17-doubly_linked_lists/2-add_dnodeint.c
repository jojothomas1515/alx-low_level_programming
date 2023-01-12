#include "lists.h"

/**
 * add_dnodeint - add a doubly linked list node
 * @head: head node of the linked list
 * @n: value of the new node
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *curr_node, *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}

	curr_node = (*head);
	new_node->next = curr_node;
	curr_node->prev = new_node;
	(*head) = new_node;
	return (new_node);
}
