#include "lists.h"

/**
 * dlistint_len - Return the number of elements in a doubly linked list
 * @h: The first node of the doubly linked list
 *
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
