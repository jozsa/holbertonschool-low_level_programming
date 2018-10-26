#include "lists.h"

/**
 * free_list - Frees a singly linked list
 * @head: The singly linked list to free
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(head->str);
		head = head->next;
		free(temp);
	}
}
