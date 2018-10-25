#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list_t list
 * @h: A pointer to the list of type list_t
 *
 * Return: The number of elements in a list_t list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
