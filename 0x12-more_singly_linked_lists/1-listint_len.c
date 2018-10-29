#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list
 * @h: The listint_t list
 *
 * Return: The number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
