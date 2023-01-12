#include "lists.h"

/**
 * add_dnodeint_end - add a doubly linked list node at the end of the list
 * @head: head node of the linked list
 * @n: value of the new node
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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
	}

	curr_node = (*head);

	while (curr_node)
	{
		if (curr_node->next == NULL)
		{
			curr_node->next = new_node;
			new_node->prev = curr_node;
			return (new_node);
		}
		curr_node = curr_node->next;
	}

	return (NULL);
}
