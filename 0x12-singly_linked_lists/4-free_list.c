#include "lists.h"

/**
 * free_list - free all of list
 * @head: the head node
 * Return: nothing
 */

void free_list(list_t *head)
{
	if (head == NULL)
		exit(-1);

	if (head->next != NULL)
		free_list(head.next);
	if (head->str != NULL)
		free(head->str);
	free(head);
	exit(1);
}
