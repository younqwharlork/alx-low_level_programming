#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data (n) of the list. If the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *current_node;

    current_node = head;

    while (current_node != NULL)
    {
        sum += current_node->n;
        current_node = current_node->next;
    }

    return (sum);
}
