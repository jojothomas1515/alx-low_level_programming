#include "lists.h"

int main(void)
{
    listint_t *head = malloc(sizeof(listint_t));
    head->next = malloc(sizeof(listint_t));
    head->next->next = malloc(sizeof(listint_t));
    head->next->next->next = head->next->next;

    free_listint_safe(&head);

    return (0);
}
