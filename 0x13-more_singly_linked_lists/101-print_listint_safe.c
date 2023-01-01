#include "lists.h"

/**
 * print_listint_safe - print node list with just one loop
 * and exit with code 98 if failed
 * @head: pointer to the first node
 * Return: the size if printed node
 */
size_t print_listint_safe(const listint_t *head)
{
	int counts = 0, exit_flag = 1;
	const listint_t *c_node = head, *t_node;

	if (head == NULL)
		exit(98);

	while (c_node != NULL && exit_flag)
	{
		printf("[%p] %d\n", (void *)&c_node->n, c_node->n);
		counts++;
		t_node = head;
		if (t_node == t_node->next)
		{
			printf("-> [%p] %d\n", (void *)&t_node->n, t_node->n);

			break;
		}
		while (t_node != c_node)
		{
			if (t_node == c_node->next)
			{
				printf("-> [%p] %d\n", (void *)&t_node->n, t_node->n);
				exit_flag = 0;
			}
			t_node = t_node->next;
		}
		c_node = c_node->next;
	}
	printf("\n");
	return (counts);
}
