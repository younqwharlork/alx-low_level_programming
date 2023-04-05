#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *               and returns the head node's data (n)
 * @head: pointer to the pointer to the head of the list
 *
 * Return: the head node's data (n). If the list is empty, return 0
 */
int pop_listint(listint_t **head)
{
    listint_t *temp_node;
    int n;

    if (head == NULL || *head == NULL)
        return (0);

    temp_node = *head;
    *head = (*head)->next;
    n = temp_node->n;
    free(temp_node);

    return (n);
}
