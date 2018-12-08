#include "lists.h"

/**
 * print_dlistint - Print all the elements of a doubly linked list
 * @h: A pointer to the first node of the doubly linked list
 *
 * Return: The number of nodes in the doubly linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
