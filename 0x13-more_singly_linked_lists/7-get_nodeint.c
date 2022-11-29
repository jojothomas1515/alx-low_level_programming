#include "lists.h"

/**
 * get_nodeint_at_index - get the node at a certain index
 * @head: pointer to the first/head node
 * @index: the position of node that we are looking for
 * Return: the address of the index node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        listint_t *curr_node = head;
        int i;

        if (head == NULL)
                return (NULL);

        for (i = 0; curr_node && i <= index; i++)
        {
                if (i == index)
                        return (curr_node);
                curr_node = curr_node->next;
        }
        return (NULL);
}