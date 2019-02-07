#include "sort.h"

/**
 * cocktail_sort_list - Sorts a linked list of integers
 * using the cocktail sort algorithm
 *
 * @list: The list to be sorted
 */

void cocktail_sort_list(listint_t **list)
{
	listint_t *temp = *list;
	int swapped = 0; /* if 2 elements have been swapped, this is set to 1 */
	int phase = 0; /* 0 for forward, 1 for backward */

	while (temp)
	{
		if (temp->prev && temp->prev->n > temp->n)
		{
			if (temp->next)
				temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;
			if (temp->prev)
				temp->prev->next = temp;
			else
				*list = temp;
			swapped = 1;
			print_list(*list);
		}
		if (phase == 0 && temp->next)
			temp = temp->next;
		else if (phase == 1 && temp->prev && !(temp->prev->n > temp->n))
			temp = temp->prev;
		if (swapped == 0 && (temp->next == NULL || temp->prev == NULL))
			return;
		else if (swapped == 1 && temp->next == NULL)
		{
			swapped = 0;
			phase = 1;
		}
		else if (swapped == 1 && temp->prev == NULL)
		{
			swapped = 0;
			phase = 0;
		}
	}
}
