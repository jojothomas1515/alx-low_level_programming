#include "lists.h"

/**
 * print_dlistint - prints a linked list
 * @h: head node of the linked list
 * Return: The number of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr_node;
	int counts = 0;

	if (h == NULL)
		return (0);

	curr_node = h;

	while (curr_node)
	{
		counts++;
		printf("%d\n", curr_node->n);
		curr_node = curr_node->next;
	}

	return ((size_t)counts);
}
