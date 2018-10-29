#include "lists.h"

/**
 * free_listint - Free all the elements of a linked list
 * @head: A pointer to the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(head);
		head = head->next;
		free(temp);
	}
}
