#include "lists.h"

/**
 * reverse_listint - reverse the linked list
 * @head: pointer to pointer of the head node
 * Return: the address if the new head nodex
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1 = NULL, *temp2 = NULL;

	if (head == NULL || (*head) == NULL)
		return (NULL);

	temp2 = (*head)->next;
	(*head)->next = temp1;
	temp1 = (*head);

	while (temp2)
	{
		(*head) = temp2;
		temp2 = temp2->next;
		(*head)->next = temp1;
		temp1 = head;
	}

	return ((*head));
}
