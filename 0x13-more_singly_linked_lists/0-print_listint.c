#include "lists.h"

/**
 * print_listint - print the the values in a linked list
 * @h: the address of the list in memory
 * Return: the size of the linked list
 */

size_t print_listint(const listint_t *h)
{
	_u_int counts = 0;
	const listint_t *curr_node = h;

	/* checking if the pointer is valid*/
	if (h == NULL)
		return (0);

	/* check if node is valid and stop iterating if not*/
	while (curr_node)
	{
		printf("%d\n", curr_node->n);
		counts++;
		curr_node = curr_node->next;
	}
	return (counts);
}
