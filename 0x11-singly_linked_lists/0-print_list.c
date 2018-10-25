#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prints the elements of a singly linked list of type list_t
 * @h: A pointer to each list
 *
 * Return: The number of nodes in each list
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
