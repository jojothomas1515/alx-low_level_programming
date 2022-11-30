#include "lists.h"

/**
 * reverse_listint - reverse the linked list
 * @head: pointer to pointer of the head node
 * Return: the address if the new head nodex
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1, *temp2;

	if ((*head) == NULL || head == NULL)
		return (NULL);
	else if (!(*head)->next)
		return ((*head));
	if ((*head)->next != NULL)
	{
		temp1 = (*head);
		(*head) = (*head)->next;
		temp2 = (*head)->next;
		temp1->next = NULL;
	}

	while ((*head)->next)
	{
		(*head)->next = temp1;
		temp1 = (*head);
		(*head) = temp2;
		if (temp2->next)
			temp2 = temp2->next;
	}
	if (temp2 == (*head))
		(*head)->next = temp1;
	return ((*head));
}
