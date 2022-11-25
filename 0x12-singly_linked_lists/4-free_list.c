#include "lists.h"

/**
 * free_list - free all of list
 * @head: the head node
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *curr_node;

	/**
	 * set curr_node to the head node 
	 * then set the head node to the next node 
	 * then free the memory containing the string
	 * the free the memory containing the next
	 * do ot over and over again till the curr is equal null
	 */
	curr_node = head;
	while (curr_node != NULL)
	{
		head = head->next;
		free(curr_node->str);
		free(curr_node->next);
		curr_node = head;
	}
}
