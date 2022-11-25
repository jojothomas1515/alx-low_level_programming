#include "lists.h"

/**
 * add_node_end - add node to the end of a linked list
 * @head: pointer to there head node pointer
 * @str: a string
 * Return: a poiner to head node
 */

list_t *add_node_end(list_t **head, const char *str)
{
        list_t *temp = *head;
        list_t *new_node;

        new_node = malloc(sizeof(size_t));
        if (new_node == NULL)
                return (NULL);

        new_node->len = strlen(str);
        new_node->str = strdup(str);
        new_node->next = NULL;

        if (temp == NULL)
                *head = new_node;
        else
        {
                while (temp->next != NULL)
                        temp = temp->next;

                temp->next = new_node;
        }
        return (*head);
}
