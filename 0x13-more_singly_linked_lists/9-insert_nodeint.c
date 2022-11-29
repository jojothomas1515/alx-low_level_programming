#include "lists.h"

/**
 * insert_nodeint_at_index - This function inserts a node at a given index
 * @head: pointer to the head node pointer
 * @idx: insertion index
 * @n: node value
 * Return: The memory address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;

	if (head != NULL && *head != NULL)
	{

		listint_t *index_node;
		listint_t *pindex_node;

		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = NULL;
		pindex_node = get_nodeint_at_index(*head, (idx - 1));
		index_node = get_nodeint_at_index(*head, idx);
		pindex_node->next = new_node;
		new_node->next = index_node;
		return (new_node);
	}
	else
	{
		new_node = add_nodeint_end(head, n);
		*head = new_node;
		return (new_node);
	}
}
