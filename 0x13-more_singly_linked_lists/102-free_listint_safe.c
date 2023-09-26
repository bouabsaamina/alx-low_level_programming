#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t node_count = 0;
    listint_t *current, *temp;

    if (h == NULL || *h == NULL)
        return (0);

    current = *h;
    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
        node_count++;
        
        if (temp <= current)
        {
            *h = NULL;
            break;
        }
    }

    return (node_count);
}
