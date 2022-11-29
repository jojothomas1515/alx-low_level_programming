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
	listint_t *new_node, *curr_node;
	_u_int i;

	if (head != NULL && *head != NULL)
	{
		listint_t *temp;
		listint_t *pindex_node;

		curr_node = *head;
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;

		for (i = 0; curr_node && (i <= idx); i++)
		{
			pindex_node = curr_node;
			curr_node = curr_node->next;
		}
		temp = pindex_node->next;
		pindex_node->next = new_node;
		new_node->next = temp;
		return (new_node);
	}
	else
	{

		*head = new_node;
		return (new_node);
	}
}
