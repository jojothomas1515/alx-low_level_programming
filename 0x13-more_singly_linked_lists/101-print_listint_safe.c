#include "lists.h"

/**
 * print_listint_safe - print node list with just one loop
 * and exit with code 98 if failed
 * @head: pointer to the first node
 * Return: the size if printed node
 */
size_t print_listint_safe(const listint_t *head)
{
	int counts = 0;

	if (head == NULL)
		exit(98);

	while (head != NULL)
	{
		printf("%d\n", head->n);
		counts++;
		head = head->next;
	}
	return (counts);
}
