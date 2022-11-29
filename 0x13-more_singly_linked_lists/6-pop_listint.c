#include "lists.h"

/**
 * pop_listint - removes the head of a linked list and make the next node head
 * @head: pointer to the pointer of head
 * Return: the data of head node
 */

int pop_listint(listint_t **head)
{
	int del_node_val;
	listint_t *t_node = *head, *temp;

	if (*head == NULL)
		return (0);

	temp = t_node->next;
	del_node_val = t_node->n;
	free(t_node);
	*head = temp;
	return (del_node_val);
}
