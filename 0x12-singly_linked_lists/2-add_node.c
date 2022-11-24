#include "lists.h"

/**
 * add_node - add node to the beginning of a linked list
 * @head: pointer to there head node pointer
 * @str: a string
 * Return: a poiner to head node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *old_node = *head;
	list_t *new_node_ptr = malloc(sizeof(list_t));

	new_node_ptr->str = strdup(str);
	new_node_ptr->len = strlen(str);
	new_node_ptr->next = old_node;
	*head = new_node_ptr;
	return (*head);
}
