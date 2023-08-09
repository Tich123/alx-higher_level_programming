#include "lists.h"

/**
 * check_cycle - Checks if a singly linked list contains a cycle
 * @list: pointer to the head of the list
 *
 * Return: 0 if no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
    listint_t *tortoise, *hare;

    if (!list)
        return (0);

    tortoise = list;
    hare = list;

    while (hare && hare->next)
    {
        tortoise = tortoise->next;           // Move the tortoise one step
        hare = hare->next->next;             // Move the hare two steps

        if (tortoise == hare)                // If they meet, then there's a cycle
            return (1);
    }

    return (0);                              // If we reach here, then no cycle detected
}
