#ifndef LIST_H
#include <stdio.h>
#include <stdlib.h>

/* structs and typedef declaration */

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

typedef unsigned int _u_int;
/* prototype declaration */
int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif /* LIST_H */