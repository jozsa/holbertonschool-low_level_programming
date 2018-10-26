#include "lists.h"

/**
 * free_list - Frees a singly linked list
 * @head: The singly linked list to free
 */

void free_list(list_t *head)
{
	list_t *last = head;
	list_t *next;

	while (last != NULL)
	{
		next = last;
		last = last->next;
		free(next);
	}
}
