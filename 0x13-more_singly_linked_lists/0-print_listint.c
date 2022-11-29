#include "lists.h"

/**
 * print_listint - print the the values in a linked list
 * @h: the address of the list in memory
 * Return: the size of the linked list
 */

size_t print_listint(const listint_t *h)
{
	_u_int count = 1;

	/* checking if the pointer is valid*/
	if (h == NULL)
		return (0);

	/* check if the struct integer n contains a value */
	if (h->n)
	{
		_putchar(h->n + '0');
		_putchar('\n');
	}
	if (h->next == NULL)
		return (count);
	count += print_listint(h->next);
	return (count);
}
