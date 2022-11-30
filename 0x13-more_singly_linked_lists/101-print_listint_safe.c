#include "list.h"

/**
 * print_listint_safe - print node list with just one loop
 * and exit with code 98 if failed
 * @head: pointer to the first node
 * Return: the size if printed node
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *curr_node;
	int i = 0, counts;

	if (head == NULL || (*head) == NULL)
		exit(98);

	curr_node = (*head);
	while (curr_node)
	{
		printf("%d\n", curr_node->n);
		counts++;
		curr_node = curr_node->next;
	}
	return (counts);
}
