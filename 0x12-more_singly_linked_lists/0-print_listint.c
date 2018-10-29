#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints the elements of a listint_t list
 * @h: The pointer to the listint_t list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
