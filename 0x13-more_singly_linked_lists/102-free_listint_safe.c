#include "lists.h"

/**
 * free_listint_safe - free linked list
 * @h: head node pointer
 * Return: the number of nodes free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *n_node, *t_node;
	size_t count = 0, stop_flag = 0;

	if ((*h) == NULL || h == NULL)
		return (0);
	if ((*h) == (*h)->next)
	{
		free((*h));
		(*h) = NULL;
		return (++count);
	}
	n_node = *h;
	while (n_node != NULL && stop_flag == 0)
	{
		t_node = *h;
		while (t_node != n_node)
		{
			if (t_node == n_node->next)
			{
				stop_flag = 1;
				n_node->next = NULL;
				break;
			}
			t_node = t_node->next;
		}
		n_node = n_node->next;
	}
	n_node = *h;
	while (n_node != NULL)
	{
		t_node = n_node;
		n_node = n_node->next;
		free(t_node);
		count++;
	}
	(*h) = NULL;
	return (count);
}
