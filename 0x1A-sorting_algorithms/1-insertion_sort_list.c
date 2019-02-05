#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 *                       using the insertion sort algorithm
 * @list: doubly linked list of integers
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j = *list;

	while ((i = j = j->next))
	{
		while (j->prev && j->prev->n > i->n)
		{
			if (j->next)
				j->next->prev = j->prev;
			j->prev->next = j->next;
			j->next = j->prev;
			j->prev = j->prev->prev;
			j->next->prev = j;
			if (j->prev)
				j->prev->next = j;
			else
				*list = j;
			print_list(*list);
		}
	}
}
