#include "lists.h"

/**
 * sum_listint - sums the int in the linked list
 * @head: pointer to the linked list
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	listint_t *curr_node;
	int result = 0;

	if (head == NULL)
		return (0);

	curr_node = head;

	while (curr_node)
	{
		result += curr_node->n;
		curr_node = curr_node->next;
	}
	return (result);
}
