#include "lists.h"

/**
 * print_list - this function  prints all the element od a singly
 * linked list
 * @h: this address of the head node
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0, len;

	count = 1;

	if (h == NULL)
		return (0);
	len = h->len;
	if (h->str == NULL)
	{
		printf("[%d] (nil)\n", 0);
	}
	else
	{
		printf("[%d] %s\n", len, h->str);
	}
	if (h->next == NULL)
	{
		return (count);
	}

	count += print_list(h->next);
	return (count);
}
