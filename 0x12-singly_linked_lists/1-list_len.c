#include "lists.h"
/**
 * list_len - finds the number of elements in a linked list
 *@h: pointer to the list
 *
 *Return: the number of count
*/

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
