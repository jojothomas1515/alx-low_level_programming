#include "lists.h"

/**
 * sum_dlistint
 */

int sum_dlistint(dlistint_t *head)
{
        dlistint_t *c_n = NULL;
        int acc = 0;

        if (head == NULL)
                return (0);

        while (c_n)
        {
                acc += c_n->n;
                c_n = c_n->next;
        }

        return (acc);
}
