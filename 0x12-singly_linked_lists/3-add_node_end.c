#include "lists.h"

/**
 * add_node_end - add node to the end of a linked list
 * @head: pointer to there head node pointer
 * @str: a string
 * Return: a poiner to head node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *head_node = *head;
	list_t *new_node_ptr;

	if (head == NULL || head_node == NULL)
		return (NULL);

	new_node_ptr = malloc(sizeof(list_t));
	
	if (new_node_ptr == NULL)
		return (NULL);

	new_node_ptr->str = strdup(str);
	new_node_ptr->len = strlen(str);
	new_node_ptr->next = NULL;

	while (head_node->next != NULL)
		head_node = head_node->next;

	head_node->next = new_node_ptr;
	return (*head);
}
